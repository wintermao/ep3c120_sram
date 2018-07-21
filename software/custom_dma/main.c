/**************************************************************************
 * Copyright(c)2007 Altera Corporation, San Jose, California, USA.        *
 * All rights reserved. All use of this software and documentation is     *
 * subject to the License Agreement located at the end of this file below.*
 **************************************************************************
 * Author - YWGAN                                                         *
 * Date - 12/21/2007                                                      *
 *                                                                        *
 * This design example shows the use of DMA read-write masters with       *
 * hardware filter block incorperated to peform low pass filtering        *
 * operation on a set of incoming data. The performance of the            *
 * hardware filter is compared with the software version of the           *
 * filter. Both filter use 16 delay taps with same coefficients.          *
 *                                                                        *
 * Beside filtering operation, the masters can be incorperated with       *
 * any tranform block to perform certain operation. The driver for        *
 * accessing the masters is included in hw_fir.c file and the ways        *
 * of using it is the same no matter what transform block in used         *
 * between the master.                                                    *
 *************************************************************************/

#include <stdio.h>
#include "stdlib.h"
#include "io.h"
#include "system.h"
#include "sys/alt_irq.h"
#include "alt_types.h"
#include "sys/alt_cache.h"
#include "sys/alt_timestamp.h"
#include "includes_and_settings.h"



int main()
{
  int i, fir_loop, mismatch;
  int * source_buffer;
  int * sw_destination_buffer;  
  int * hw_destination_buffer; 
  int * delay_line;
  unsigned long hw_time_1, hw_time_2; 
  unsigned long sw_time_1, sw_time_2; 

  /* Code and data are in DDR SDRAM so all of SSRAM is available */
  source_buffer = (int *) SSRAM_BASE;

  
  /*Both software and hardware filter results are put in DDR-SDRAM, malloc() is used as the program is resided in DDR-SDRAM*/ 
  sw_destination_buffer = (int *) malloc(BUFFER_SIZE);
  hw_destination_buffer = (int *) malloc(BUFFER_SIZE);
  if(sw_destination_buffer == NULL)
  {
    printf("Failure to allocate the software destination buffer\n");
    return 1;
  }
  if(hw_destination_buffer == NULL)
  {
    printf("Failure to allocate the software destination buffer\n");
    return 1;
  }
  

  /*16 delay taps for the software filter*/  
  delay_line = (int *) malloc(64);
  if(delay_line == NULL)
  {
    printf("Failed to allocate buffer for the delay line\n");
    return 1;
  }
  
  
/**************************************************
 * Populating test data                           *
 * Zeroes are stuffed in to upscale the test data *
 *************************************************/           
  printf("Writing test data\n\n"); 
  for(i=0; i<(BUFFER_SIZE / 4); i++)
  {
        if((i%4)==0)
        {
            source_buffer[i] = i%(0x8000);  // keeps the input within the signed 16 bit domain
        }
        else
        {
            source_buffer[i] = 0;
        }
  }    
/***************************************************/


/***************************************************
 * Return 1 if the timestamp timer is not set      *
 **************************************************/  
  if(alt_timestamp_start() < 0)
  {
     printf("Please add the timestamp_timer to the timestamp timer setting in the syslib properties page.\n");
     return 1;
  }     
/***************************************************/


/****************************************************
 * Start the software filter operation.             *
 * If the filter is operating on different sets of  *
 * data, please change the fir_loop according to the*
 * data iteration number                            *
 ***************************************************/
  printf("Starting software filter operation\n");
  fir_loop=1; /*change this according to which loop of input data that is passing to the filter*/
  sw_time_1 = alt_timestamp();
  sw_fir(source_buffer, sw_destination_buffer, BUFFER_SIZE, delay_line, fir_loop);
  sw_time_2 = alt_timestamp();       
  printf("Software filter is done\n\n");
/***************************************************/


/****************************************************
 * Start the DMA transfer to peform hardware filter *
 * operation. The operation is completed when the   *
 * DMA fires an interrupt or the DONE bit is high.  *
 ****************************************************/        
  printf("Starting hardware filter operation\n");  
  hw_time_1 = alt_timestamp();
  if(dma_fir(source_buffer, hw_destination_buffer, BUFFER_SIZE, IRQ))
  {    
    printf("Hardware filter failed, exiting...\n");     
    return 1;
  }
  else
  {
    hw_time_2 = alt_timestamp();       
    printf("Hardware filter is done\n\n");    
  }   
/****************************************************/


/*****************************************************
 * Validates the results for both filter operations. *
 * Print the processing time taken for both filters  *
 * if all data match.                                *
 *****************************************************/      
  printf("Validating the hardware and software filter outputs\n\n");
  i = 0;  // first eight outputs are random data and will differ if you re-run the software
  mismatch = 0;
  do  
  {
    if(sw_destination_buffer[i] != hw_destination_buffer[i])
    {
       mismatch = 1; 
    }
    i++;         
  } while((mismatch==0) && (i<(BUFFER_SIZE / 4)));


  
/*free up the malloc'ed memory locations*/  
  free(sw_destination_buffer);
  free(hw_destination_buffer);
  free(delay_line);
  
  if(mismatch==0)
  {
    printf("All the hardware and software results match\n");
    printf("Processing times:\n");
    printf("Software processing time was: %f seconds\n", ((double)(sw_time_2-sw_time_1))/((double)alt_timestamp_freq()));
    printf("Hardware processing time was: %f seconds\n", ((double)(hw_time_2-hw_time_1))/((double)alt_timestamp_freq())); 
    printf("Hardware versus software speed-up factor was: %.2f times\n\n", ((double)(sw_time_2-sw_time_1))/((double)(hw_time_2-hw_time_1)));
    printf("Exiting... %c", 0x4); // ^D
    return 0;
  }
  else
  {
    printf("\n\nThere are some data mismatches between the hardware and software results\n");
    printf("Exiting... %c", 0x4); // ^D
    return 1;
  }  
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
