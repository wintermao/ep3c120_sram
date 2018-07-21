#include <stdio.h>
#include "system.h"
#include "io.h"
#include "sys/alt_irq.h"
#include "sys/alt_cache.h"
#include "alt_types.h"
#include "dma_avalon_access.h"
#include "includes_and_settings.h"


volatile int dma_done = 0; /*indication for completion of the DMA trasnfer operation*/


/***********************************************
 * Interrupt handler for the DMA IRQ. When the *
 * IRQ is fired, dma_done is set to 1. The IRQ *
 * is cleared before exiting the function.     *
 * Change the function contents according to   *
 * the handler you wish to have.               * 
 **********************************************/
void dma_irq(void * context, alt_u32 id)
{
  dma_done++;  
  DMA_WR_STATUS(FIR_DMA_BASE, 0);  /*clear the interrupt*/
}
/**********************************************/


/***********************************************
 * Register the IRQ. Return 1 if the           *
 * registration failed.                        *
 **********************************************/
int dma_irq_reg()
{
    if(alt_irq_register(FIR_DMA_IRQ, NULL, dma_irq) != 0)
    {
       return 1;
    }
    return 0;
}
/**********************************************/


/***********************************************
 * Function to write values to DMA registers.  *
 * Writing registers can't be done if the DMA  *
 * is busy and the function returns 1.         *
 **********************************************/
int mem_to_mem_copy(int * read_location, int * write_location, int length, int control)        
{
    if((DMA_RD_STATUS(FIR_DMA_BASE) & DMA_BUSY_BIT)==DMA_BUSY_BIT)
    {
        return 1;
    }

    /*Read buffer address*/
    DMA_WR_READADDR(FIR_DMA_BASE, (unsigned int)read_location);
    /*Write buffer address*/
    DMA_WR_WRITEADDR(FIR_DMA_BASE, (unsigned int)write_location);
    /*Data length size*/     
    DMA_WR_LEN(FIR_DMA_BASE, length);
    /*Control register*/
    DMA_WR_CTRL(FIR_DMA_BASE, control);
    return 0;
}
/**********************************************/


/***********************************************
 * This function pass in the read and write    *
 * address, data length size and starts the    *
 * data transfer. The function returns to the  *
 * caller function once the DMA IRQ is fires,  *
 * or the DONE bit it has been monitoring is   *
 * set, depend on what user choose in the main.*
 *                                             * 
 * Return 1 if IRQ registering failed or the   *
 * DMA is busy.                                *  
 **********************************************/
int dma_fir(int * source_location, int * destination_location, int data_size, int irq_en)
{   
    int control;
    
    /*Register the IRQ if user choose interrupt method*/    
    if(irq_en)
    {        
        if (dma_irq_reg())
        {
            printf("Registering the interrupt failed\n");
            return 1;
        }
       control = (DMA_GO_BIT | DMA_IRQ_E_BIT | DMA_CLR_BIT);
    }
    else  /*Else using DONE bit polling method*/
    {
        control = (DMA_GO_BIT | DMA_CLR_BIT);
    }    
    
    /*Flush the processor cache before performing the transfer*/
    alt_dcache_flush_all();  
    if (mem_to_mem_copy(source_location, destination_location, data_size, control))
    {
        printf("The DMA is busy\n");
        return 1;
    }  
    
    /*Keep spinning until IRQ fires*/
    if(irq_en)
    {
        while (dma_done==0)  { }
        dma_done = 0;  // clear the global variable
    }
    
    /*Else keep polling the DONE bit until it is set*/
    else
    {
        while ((DMA_RD_STATUS(FIR_DMA_BASE) & DMA_DONE_BIT)!=DMA_DONE_BIT) {}
    }  
    return 0;
}    


/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2007 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
* Altera does not recommend, suggest or require that this reference design    *
* file be used in conjunction or combination with any other product.          *
******************************************************************************/
