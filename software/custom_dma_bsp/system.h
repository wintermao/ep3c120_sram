/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'nios'
 * SOPC Builder design path: ../../nios.sopcinfo
 *
 * Generated: Sun Aug 12 19:46:34 CST 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x29001820
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000001
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1e
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 32768
#define ALT_CPU_EXCEPTION_ADDR 0x20000020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 32768
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1e
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x20000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x29001820
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000001
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1e
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 32768
#define NIOS2_EXCEPTION_ADDR 0x20000020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 32768
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1e
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x20000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_DMA
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_LCD_16207
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PERFORMANCE_COUNTER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SGDMA
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_ETH_TSE
#define __ALTERA_GENERIC_TRISTATE_CONTROLLER
#define __ALTERA_NIOS2_QSYS
#define __ALTMEMDDR2
#define __ALTPLL
#define __PIPELINED_READ_BURST_WRITE_FIR_DMA


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone III"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x28000080
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x28000080
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x28000080
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios"


/*
 * button_pio configuration
 *
 */

#define ALT_MODULE_CLASS_button_pio altera_avalon_pio
#define BUTTON_PIO_BASE 0x28000070
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 1
#define BUTTON_PIO_DRIVEN_SIM_VALUE 15
#define BUTTON_PIO_EDGE_TYPE "RISING"
#define BUTTON_PIO_FREQ 60000000
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_IRQ 4
#define BUTTON_PIO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON_PIO_IRQ_TYPE "EDGE"
#define BUTTON_PIO_NAME "/dev/button_pio"
#define BUTTON_PIO_RESET_VALUE 0
#define BUTTON_PIO_SPAN 32
#define BUTTON_PIO_TYPE "altera_avalon_pio"


/*
 * ddr2_bot configuration
 *
 */

#define ALT_MODULE_CLASS_ddr2_bot altmemddr2
#define DDR2_BOT_BASE 0x18000000
#define DDR2_BOT_IRQ -1
#define DDR2_BOT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DDR2_BOT_NAME "/dev/ddr2_bot"
#define DDR2_BOT_SPAN 134217728
#define DDR2_BOT_TYPE "altmemddr2"


/*
 * ddr2_bot configuration as viewed by dma_0_write_master
 *
 */

#define DMA_0_WRITE_MASTER_DDR2_BOT_BASE 0x18000000
#define DMA_0_WRITE_MASTER_DDR2_BOT_IRQ -1
#define DMA_0_WRITE_MASTER_DDR2_BOT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_0_WRITE_MASTER_DDR2_BOT_NAME "/dev/ddr2_bot"
#define DMA_0_WRITE_MASTER_DDR2_BOT_SPAN 134217728
#define DMA_0_WRITE_MASTER_DDR2_BOT_TYPE "altmemddr2"


/*
 * ddr2_bot configuration as viewed by sgdma_rx_m_write
 *
 */

#define SGDMA_RX_M_WRITE_DDR2_BOT_BASE 0x0
#define SGDMA_RX_M_WRITE_DDR2_BOT_IRQ -1
#define SGDMA_RX_M_WRITE_DDR2_BOT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SGDMA_RX_M_WRITE_DDR2_BOT_NAME "/dev/ddr2_bot"
#define SGDMA_RX_M_WRITE_DDR2_BOT_SPAN 134217728
#define SGDMA_RX_M_WRITE_DDR2_BOT_TYPE "altmemddr2"


/*
 * ddr2_bot configuration as viewed by sgdma_tx_m_read
 *
 */

#define SGDMA_TX_M_READ_DDR2_BOT_BASE 0x0
#define SGDMA_TX_M_READ_DDR2_BOT_IRQ -1
#define SGDMA_TX_M_READ_DDR2_BOT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SGDMA_TX_M_READ_DDR2_BOT_NAME "/dev/ddr2_bot"
#define SGDMA_TX_M_READ_DDR2_BOT_SPAN 134217728
#define SGDMA_TX_M_READ_DDR2_BOT_TYPE "altmemddr2"


/*
 * ddr2_top configuration
 *
 */

#define ALT_MODULE_CLASS_ddr2_top altmemddr2
#define DDR2_TOP_BASE 0x20000000
#define DDR2_TOP_IRQ -1
#define DDR2_TOP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DDR2_TOP_NAME "/dev/ddr2_top"
#define DDR2_TOP_SPAN 134217728
#define DDR2_TOP_TYPE "altmemddr2"


/*
 * ddr2_top configuration as viewed by dma_0_read_master
 *
 */

#define DMA_0_READ_MASTER_DDR2_TOP_BASE 0x20000000
#define DMA_0_READ_MASTER_DDR2_TOP_IRQ -1
#define DMA_0_READ_MASTER_DDR2_TOP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_0_READ_MASTER_DDR2_TOP_NAME "/dev/ddr2_top"
#define DMA_0_READ_MASTER_DDR2_TOP_SPAN 134217728
#define DMA_0_READ_MASTER_DDR2_TOP_TYPE "altmemddr2"


/*
 * descriptor_memory configuration
 *
 */

#define ALT_MODULE_CLASS_descriptor_memory altera_avalon_onchip_memory2
#define DESCRIPTOR_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define DESCRIPTOR_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define DESCRIPTOR_MEMORY_BASE 0x29000000
#define DESCRIPTOR_MEMORY_CONTENTS_INFO ""
#define DESCRIPTOR_MEMORY_DUAL_PORT 0
#define DESCRIPTOR_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define DESCRIPTOR_MEMORY_INIT_CONTENTS_FILE "nios_descriptor_memory"
#define DESCRIPTOR_MEMORY_INIT_MEM_CONTENT 1
#define DESCRIPTOR_MEMORY_INSTANCE_ID "NONE"
#define DESCRIPTOR_MEMORY_IRQ -1
#define DESCRIPTOR_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DESCRIPTOR_MEMORY_NAME "/dev/descriptor_memory"
#define DESCRIPTOR_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define DESCRIPTOR_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define DESCRIPTOR_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define DESCRIPTOR_MEMORY_SINGLE_CLOCK_OP 0
#define DESCRIPTOR_MEMORY_SIZE_MULTIPLE 1
#define DESCRIPTOR_MEMORY_SIZE_VALUE 4096
#define DESCRIPTOR_MEMORY_SPAN 4096
#define DESCRIPTOR_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define DESCRIPTOR_MEMORY_WRITABLE 1


/*
 * dma_0 configuration
 *
 */

#define ALT_MODULE_CLASS_dma_0 altera_avalon_dma
#define DMA_0_ALLOW_BYTE_TRANSACTIONS 1
#define DMA_0_ALLOW_DOUBLEWORD_TRANSACTIONS 1
#define DMA_0_ALLOW_HW_TRANSACTIONS 1
#define DMA_0_ALLOW_QUADWORD_TRANSACTIONS 1
#define DMA_0_ALLOW_WORD_TRANSACTIONS 1
#define DMA_0_BASE 0x29002480
#define DMA_0_IRQ 5
#define DMA_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define DMA_0_LENGTHWIDTH 32
#define DMA_0_MAX_BURST_SIZE 8
#define DMA_0_NAME "/dev/dma_0"
#define DMA_0_SPAN 64
#define DMA_0_TYPE "altera_avalon_dma"


/*
 * ext_flash configuration
 *
 */

#define ALT_MODULE_CLASS_ext_flash altera_generic_tristate_controller
#define EXT_FLASH_BASE 0x0
#define EXT_FLASH_HOLD_VALUE 20
#define EXT_FLASH_IRQ -1
#define EXT_FLASH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define EXT_FLASH_NAME "/dev/ext_flash"
#define EXT_FLASH_SETUP_VALUE 80
#define EXT_FLASH_SIZE 67108864u
#define EXT_FLASH_SPAN 67108864
#define EXT_FLASH_TIMING_UNITS "ns"
#define EXT_FLASH_TYPE "altera_generic_tristate_controller"
#define EXT_FLASH_WAIT_VALUE 40


/*
 * fir_dma configuration
 *
 */

#define ALT_MODULE_CLASS_fir_dma pipelined_read_burst_write_fir_dma
#define FIR_DMA_BASE 0x28000360
#define FIR_DMA_IRQ 3
#define FIR_DMA_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIR_DMA_NAME "/dev/fir_dma"
#define FIR_DMA_SPAN 32
#define FIR_DMA_TYPE "pipelined_read_burst_write_fir_dma"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYS_CLK_TIMER
#define ALT_TIMESTAMP_CLK HIGH_RES_TIMER


/*
 * high_res_timer configuration
 *
 */

#define ALT_MODULE_CLASS_high_res_timer altera_avalon_timer
#define HIGH_RES_TIMER_ALWAYS_RUN 0
#define HIGH_RES_TIMER_BASE 0x28000000
#define HIGH_RES_TIMER_COUNTER_SIZE 32
#define HIGH_RES_TIMER_FIXED_PERIOD 0
#define HIGH_RES_TIMER_FREQ 60000000
#define HIGH_RES_TIMER_IRQ 1
#define HIGH_RES_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define HIGH_RES_TIMER_LOAD_VALUE 599
#define HIGH_RES_TIMER_MULT 1.0E-6
#define HIGH_RES_TIMER_NAME "/dev/high_res_timer"
#define HIGH_RES_TIMER_PERIOD 10.0
#define HIGH_RES_TIMER_PERIOD_UNITS "us"
#define HIGH_RES_TIMER_RESET_OUTPUT 0
#define HIGH_RES_TIMER_SNAPSHOT 1
#define HIGH_RES_TIMER_SPAN 64
#define HIGH_RES_TIMER_TICKS_PER_SEC 100000.0
#define HIGH_RES_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define HIGH_RES_TIMER_TYPE "altera_avalon_timer"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x28000080
#define JTAG_UART_IRQ 2
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 8
#define JTAG_UART_READ_THRESHOLD 4
#define JTAG_UART_SPAN 16
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 8
#define JTAG_UART_WRITE_THRESHOLD 4


/*
 * lcd_display configuration
 *
 */

#define ALT_MODULE_CLASS_lcd_display altera_avalon_lcd_16207
#define LCD_DISPLAY_BASE 0x28000030
#define LCD_DISPLAY_IRQ -1
#define LCD_DISPLAY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_DISPLAY_NAME "/dev/lcd_display"
#define LCD_DISPLAY_SPAN 32
#define LCD_DISPLAY_TYPE "altera_avalon_lcd_16207"


/*
 * led_pio configuration
 *
 */

#define ALT_MODULE_CLASS_led_pio altera_avalon_pio
#define LED_PIO_BASE 0x28000060
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 8
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE "NONE"
#define LED_PIO_FREQ 60000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ -1
#define LED_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_PIO_IRQ_TYPE "NONE"
#define LED_PIO_NAME "/dev/led_pio"
#define LED_PIO_RESET_VALUE 0
#define LED_PIO_SPAN 32
#define LED_PIO_TYPE "altera_avalon_pio"


/*
 * performance_counter configuration
 *
 */

#define ALT_MODULE_CLASS_performance_counter altera_avalon_performance_counter
#define PERFORMANCE_COUNTER_BASE 0x28000040
#define PERFORMANCE_COUNTER_HOW_MANY_SECTIONS 1
#define PERFORMANCE_COUNTER_IRQ -1
#define PERFORMANCE_COUNTER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PERFORMANCE_COUNTER_NAME "/dev/performance_counter"
#define PERFORMANCE_COUNTER_SPAN 64
#define PERFORMANCE_COUNTER_TYPE "altera_avalon_performance_counter"


/*
 * pll configuration
 *
 */

#define ALT_MODULE_CLASS_pll altpll
#define PLL_BASE 0x28000090
#define PLL_IRQ -1
#define PLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PLL_NAME "/dev/pll"
#define PLL_SPAN 16
#define PLL_TYPE "altpll"


/*
 * seven_seg_pio configuration
 *
 */

#define ALT_MODULE_CLASS_seven_seg_pio altera_avalon_pio
#define SEVEN_SEG_PIO_BASE 0x28000020
#define SEVEN_SEG_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define SEVEN_SEG_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEVEN_SEG_PIO_CAPTURE 0
#define SEVEN_SEG_PIO_DATA_WIDTH 16
#define SEVEN_SEG_PIO_DO_TEST_BENCH_WIRING 0
#define SEVEN_SEG_PIO_DRIVEN_SIM_VALUE 0
#define SEVEN_SEG_PIO_EDGE_TYPE "NONE"
#define SEVEN_SEG_PIO_FREQ 60000000
#define SEVEN_SEG_PIO_HAS_IN 0
#define SEVEN_SEG_PIO_HAS_OUT 1
#define SEVEN_SEG_PIO_HAS_TRI 0
#define SEVEN_SEG_PIO_IRQ -1
#define SEVEN_SEG_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEVEN_SEG_PIO_IRQ_TYPE "NONE"
#define SEVEN_SEG_PIO_NAME "/dev/seven_seg_pio"
#define SEVEN_SEG_PIO_RESET_VALUE 0
#define SEVEN_SEG_PIO_SPAN 32
#define SEVEN_SEG_PIO_TYPE "altera_avalon_pio"


/*
 * sgdma_rx configuration
 *
 */

#define ALT_MODULE_CLASS_sgdma_rx altera_avalon_sgdma
#define SGDMA_RX_ADDRESS_WIDTH 32
#define SGDMA_RX_ALWAYS_DO_MAX_BURST 1
#define SGDMA_RX_ATLANTIC_CHANNEL_DATA_WIDTH 4
#define SGDMA_RX_AVALON_MM_BYTE_REORDER_MODE 0
#define SGDMA_RX_BASE 0x29002400
#define SGDMA_RX_BURST_DATA_WIDTH 8
#define SGDMA_RX_BURST_TRANSFER 0
#define SGDMA_RX_BYTES_TO_TRANSFER_DATA_WIDTH 16
#define SGDMA_RX_CHAIN_WRITEBACK_DATA_WIDTH 32
#define SGDMA_RX_COMMAND_FIFO_DATA_WIDTH 104
#define SGDMA_RX_CONTROL_DATA_WIDTH 8
#define SGDMA_RX_CONTROL_SLAVE_ADDRESS_WIDTH 0x4
#define SGDMA_RX_CONTROL_SLAVE_DATA_WIDTH 32
#define SGDMA_RX_DESCRIPTOR_READ_BURST 0
#define SGDMA_RX_DESC_DATA_WIDTH 32
#define SGDMA_RX_HAS_READ_BLOCK 0
#define SGDMA_RX_HAS_WRITE_BLOCK 1
#define SGDMA_RX_IN_ERROR_WIDTH 6
#define SGDMA_RX_IRQ 6
#define SGDMA_RX_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SGDMA_RX_NAME "/dev/sgdma_rx"
#define SGDMA_RX_OUT_ERROR_WIDTH 0
#define SGDMA_RX_READ_BLOCK_DATA_WIDTH 32
#define SGDMA_RX_READ_BURSTCOUNT_WIDTH 4
#define SGDMA_RX_SPAN 64
#define SGDMA_RX_STATUS_TOKEN_DATA_WIDTH 24
#define SGDMA_RX_STREAM_DATA_WIDTH 32
#define SGDMA_RX_SYMBOLS_PER_BEAT 4
#define SGDMA_RX_TYPE "altera_avalon_sgdma"
#define SGDMA_RX_UNALIGNED_TRANSFER 0
#define SGDMA_RX_WRITE_BLOCK_DATA_WIDTH 32
#define SGDMA_RX_WRITE_BURSTCOUNT_WIDTH 4


/*
 * sgdma_tx configuration
 *
 */

#define ALT_MODULE_CLASS_sgdma_tx altera_avalon_sgdma
#define SGDMA_TX_ADDRESS_WIDTH 32
#define SGDMA_TX_ALWAYS_DO_MAX_BURST 1
#define SGDMA_TX_ATLANTIC_CHANNEL_DATA_WIDTH 4
#define SGDMA_TX_AVALON_MM_BYTE_REORDER_MODE 0
#define SGDMA_TX_BASE 0x29002440
#define SGDMA_TX_BURST_DATA_WIDTH 8
#define SGDMA_TX_BURST_TRANSFER 0
#define SGDMA_TX_BYTES_TO_TRANSFER_DATA_WIDTH 16
#define SGDMA_TX_CHAIN_WRITEBACK_DATA_WIDTH 32
#define SGDMA_TX_COMMAND_FIFO_DATA_WIDTH 104
#define SGDMA_TX_CONTROL_DATA_WIDTH 8
#define SGDMA_TX_CONTROL_SLAVE_ADDRESS_WIDTH 0x4
#define SGDMA_TX_CONTROL_SLAVE_DATA_WIDTH 32
#define SGDMA_TX_DESCRIPTOR_READ_BURST 0
#define SGDMA_TX_DESC_DATA_WIDTH 32
#define SGDMA_TX_HAS_READ_BLOCK 1
#define SGDMA_TX_HAS_WRITE_BLOCK 0
#define SGDMA_TX_IN_ERROR_WIDTH 0
#define SGDMA_TX_IRQ 7
#define SGDMA_TX_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SGDMA_TX_NAME "/dev/sgdma_tx"
#define SGDMA_TX_OUT_ERROR_WIDTH 1
#define SGDMA_TX_READ_BLOCK_DATA_WIDTH 32
#define SGDMA_TX_READ_BURSTCOUNT_WIDTH 4
#define SGDMA_TX_SPAN 64
#define SGDMA_TX_STATUS_TOKEN_DATA_WIDTH 24
#define SGDMA_TX_STREAM_DATA_WIDTH 32
#define SGDMA_TX_SYMBOLS_PER_BEAT 4
#define SGDMA_TX_TYPE "altera_avalon_sgdma"
#define SGDMA_TX_UNALIGNED_TRANSFER 0
#define SGDMA_TX_WRITE_BLOCK_DATA_WIDTH 32
#define SGDMA_TX_WRITE_BURSTCOUNT_WIDTH 4


/*
 * ssram configuration
 *
 */

#define ALT_MODULE_CLASS_ssram altera_generic_tristate_controller
#define SSRAM_BASE 0x4000000
#define SSRAM_IRQ -1
#define SSRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SSRAM_NAME "/dev/ssram"
#define SSRAM_SPAN 8388608
#define SSRAM_SRAM_MEMORY_SIZE 1
#define SSRAM_SRAM_MEMORY_UNITS 1048576
#define SSRAM_SSRAM_DATA_WIDTH 32
#define SSRAM_SSRAM_READ_LATENCY 2
#define SSRAM_TYPE "altera_generic_tristate_controller"


/*
 * sys_clk_timer configuration
 *
 */

#define ALT_MODULE_CLASS_sys_clk_timer altera_avalon_timer
#define SYS_CLK_TIMER_ALWAYS_RUN 0
#define SYS_CLK_TIMER_BASE 0x28000180
#define SYS_CLK_TIMER_COUNTER_SIZE 32
#define SYS_CLK_TIMER_FIXED_PERIOD 0
#define SYS_CLK_TIMER_FREQ 60000000
#define SYS_CLK_TIMER_IRQ 0
#define SYS_CLK_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYS_CLK_TIMER_LOAD_VALUE 599999
#define SYS_CLK_TIMER_MULT 0.0010
#define SYS_CLK_TIMER_NAME "/dev/sys_clk_timer"
#define SYS_CLK_TIMER_PERIOD 10.0
#define SYS_CLK_TIMER_PERIOD_UNITS "ms"
#define SYS_CLK_TIMER_RESET_OUTPUT 0
#define SYS_CLK_TIMER_SNAPSHOT 1
#define SYS_CLK_TIMER_SPAN 64
#define SYS_CLK_TIMER_TICKS_PER_SEC 100.0
#define SYS_CLK_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYS_CLK_TIMER_TYPE "altera_avalon_timer"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x28000390
#define SYSID_ID 2
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1534067455
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * tse_mac configuration
 *
 */

#define ALT_MODULE_CLASS_tse_mac altera_eth_tse
#define TSE_MAC_BASE 0x29002000
#define TSE_MAC_ENABLE_MACLITE 0
#define TSE_MAC_FIFO_WIDTH 32
#define TSE_MAC_IRQ -1
#define TSE_MAC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TSE_MAC_IS_MULTICHANNEL_MAC 0
#define TSE_MAC_MACLITE_GIGE 0
#define TSE_MAC_MDIO_SHARED 0
#define TSE_MAC_NAME "/dev/tse_mac"
#define TSE_MAC_NUMBER_OF_CHANNEL 1
#define TSE_MAC_NUMBER_OF_MAC_MDIO_SHARED 1
#define TSE_MAC_PCS 0
#define TSE_MAC_PCS_ID 0
#define TSE_MAC_PCS_SGMII 0
#define TSE_MAC_RECEIVE_FIFO_DEPTH 2048
#define TSE_MAC_REGISTER_SHARED 0
#define TSE_MAC_RGMII 1
#define TSE_MAC_SPAN 1024
#define TSE_MAC_TRANSMIT_FIFO_DEPTH 2048
#define TSE_MAC_TYPE "altera_eth_tse"
#define TSE_MAC_USE_MDIO 1

#endif /* __SYSTEM_H_ */
