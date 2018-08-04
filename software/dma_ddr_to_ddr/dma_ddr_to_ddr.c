/*
 * dma_test.c
 *
 *  Created on: 2018-2-4
 *      Author: mmh
 */


#include "system.h"
#include "sys/alt_timestamp.h"          // Interval Timer
#include "alt_types.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "sys/alt_dma.h"
#include <sys/alt_cache.h>

static volatile int tx_done = 0;
alt_u32 *ddr_dword1,*ddr_dword2;
alt_u32 *ddr_u32;
alt_u32 offset_source,offset_dest,base_source,base_dest,size_byte;
alt_dma_txchan txchan;
alt_dma_rxchan rxchan;
extern int time_1s;
//callback funtion
static void done (void* handle)
{
    tx_done++;
    dma_init(txchan,rxchan,ddr_dword1,ddr_dword2,size_byte);
}
void dma_init(alt_dma_txchan txchan,alt_dma_rxchan rxchan,alt_u32 *s_addr,alt_u32 *d_addr,alt_u32 t_size)
{
	alt_dma_txchan_send(txchan, s_addr,	 t_size, NULL, NULL);
	alt_dma_rxchan_prepare (rxchan, d_addr, t_size, done,NULL);
}
int main()
{
	alt_u32 t0,t1,dt;
	alt_u32 i,timestamp_freq;
	int tx_done_last;

	tx_done_last=tx_done;

	//DDR2_BASE
	base_source=DDR2_TOP_BASE;
	base_dest=DDR2_BOT_BASE;
	offset_source=0x1000000;
	offset_dest=0x000000;
	size_byte=0x100000;

	ddr_dword1=base_source+offset_source;
	ddr_dword2=base_dest+offset_dest;

	ddr_u32=ddr_dword1;
	for(i=0;i<size_byte/4;i++)		//generate data,size is 1M byte
	{
	  *ddr_u32=i;
	  ddr_u32++;
	}
	timestamp_freq=alt_timestamp_freq();
	printf("time stamp system freq= %ld Hz\n", timestamp_freq);
	alt_timestamp_start();

	//-----------------------------------------------------------
	//open transmit channel
	if ((txchan = alt_dma_txchan_open("/dev/dma_0")) == NULL)
	{
	 printf ("Failed to open transmit channel /dev/dma_0\n");
	 exit (1);
	}
	else
	 printf("open transmit channel\n");
	//open receive channel
	if ((rxchan = alt_dma_rxchan_open("/dev/dma_0")) == NULL)
	{
	 printf ("Failed to open receive channel /dev/dma_0\n");
	 exit (1);
	}
	else
	 printf("open receive channel\n");

	//start send
	alt_dcache_flush_all(); //cache sync to memory
	alt_dma_txchan_ioctl(txchan, ALT_DMA_SET_MODE_128,NULL);  //set 32bit mode
	dma_init(txchan,rxchan,ddr_dword1,ddr_dword2,size_byte);
	Timer_Initial();
	/*
	if (alt_dma_txchan_send(    txchan,
							 ddr_dword1,
							 size_byte,
							 done,
							  NULL) < 0)
	{
	  printf ("Failed to post transmit request.\n");
	  exit (1);
	}
	else
	{
	 t0 = alt_timestamp();
	 printf("start send.\n");
	}
	*/
     //-----------------------------------------------------------
     /* 等待发送结束 */
	/*
     while (!tx_done);
     t1 = alt_timestamp();
     printf ("Transfer successful!\n");
     printf("divide freq=%d\n",divide);
     dt=t1-t0;
     printf("dma dword transmit: size=0x%x t0=%ld t1=%ld dt=%ld time=%fs\n", size_byte,t0,t1,dt,(double)dt/timestamp_freq);

     //-----------------------------------------------------------
     //关闭DMA接收信道

	while(1)
	{
		int i;
		if(tx_done=1)
		{
			tx_done=0;
			alt_dma_txchan_ioctl(txchan,  ALT_DMA_TX_ONLY_ON, ddr_dword2);
			alt_dma_txchan_send(    txchan,
										 ddr_dword1,
										 size_byte,
										 done,
										  NULL);
			i++;
			printf("dma transmit successful ,count=%5d\n",i);
		}
	}
	*/

	while(1)
	{
		if(time_1s==1)
		{
			time_1s=0;
			printf("transtims is %4d\n",tx_done-tx_done_last);
			tx_done_last=tx_done;
		}

	}
     alt_dma_txchan_close(txchan);
     alt_dma_rxchan_close(rxchan);

     return 0;

}
