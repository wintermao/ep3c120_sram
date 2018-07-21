#ifndef _includes_and_settings_h
#define _includes_and_settings_h

#define tap_size 16 /*number of delay taps in the filter*/
#define IRQ 1  /*waiting for the DMA masters interrupt, otherwise Done bit polling is used*/
#define BUFFER_SIZE 1024*1024 /*data buffer size, at least 68 bytes of data and multiple of 4 bytes */

#if (BUFFER_SIZE == 0)
    #error You have set the buffer size to be zero, increase it to a positive value that is a multiple of 4 bytes
#elif ((BUFFER_SIZE & 0x3) != 0)
    #error Make sure BUFFER_SIZE is a multiple of 4 bytes to ensure word boundary accesses
#elif (BUFFER_SIZE > 2*1024*1024)
    #error Reduce BUFFER_SIZE to be 2MB or less so that the source buffer will fit in SSRAM
#endif




int dma_irq_reg();
void sw_fir(int *input_data, int *output_data, int length, int * delay_line, int frame);
int dma_fir(int * source_location, int * destination_location, int data_size, int irq_en);
int mem_to_mem_copy(int * read_location, int * write_location, int length, int control);
void dma_irq(void * context, alt_u32 id);

#endif
