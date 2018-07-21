#include <stdio.h>
#include "system.h"
#include "io.h"
#include "includes_and_settings.h"


/********************************************
 * Function to implement low pass filtering *
 *******************************************/
void sw_fir(int *input_data, int *output_data, int length, int * delay_line, int frame)
{     
    int N=length/4;         
    int i, j, k;
    int mac;
    int work_data[N+(tap_size-1)];
    
    /*please change the value of filter coefficients in the coeff.dat file according to your design*/
    char coeff[tap_size] = {
        #include "coeff.dat"
    };
    
    /*copy the filter input data to a working array*/    
    for (i = 0; i < N; i += 1)
    {
        work_data[i+(tap_size-1)] = input_data[i];                
    }
    
    /*copy the delay line value to the working array*/
    for (i = 0; i < (tap_size-1); i++)
    {
        /*all delay line values are zero for first set of data, else use back values of previous set of data*/
        work_data[i] = (frame == 1)? 0: delay_line[i];         
    }

    /*multiply input with filter coefficients and accumulate the result*/    
    for (i = 0; i < N; i++)
    {
      j = i + tap_size-1;
      mac = 0;
            
      for (k = 0; k < tap_size; k++)
      {
          mac += work_data[j-k] * coeff[k];
      }      
            
      /*scale the output with factor = 1/(2^8)*/            
      if(mac<0)
      {
         output_data[i] = (mac+255)>>8; /*to avoid division result approach negative infinity*/
      }
      else
      {
         output_data[i] = mac>>8;
      }
    }
        
    /*storing the delay line for next round of filter operation*/
    for (i = 0; i < (tap_size-1); i++)
    {
        delay_line[i] = work_data[N+i];
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
