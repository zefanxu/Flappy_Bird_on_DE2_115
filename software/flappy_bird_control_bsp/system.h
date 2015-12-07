/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'flappy_bird_control'
 * SOPC Builder design path: ../../flappy_bird_control.sopcinfo
 *
 * Generated: Sun Dec 06 13:10:45 CST 2015
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

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00001020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00001020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_NIOS2_GEN2
#define __ALTPLL


/*
 * ScoreX configuration
 *
 */

#define ALT_MODULE_CLASS_ScoreX altera_avalon_pio
#define SCOREX_BASE 0x100
#define SCOREX_BIT_CLEARING_EDGE_REGISTER 0
#define SCOREX_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SCOREX_CAPTURE 0
#define SCOREX_DATA_WIDTH 16
#define SCOREX_DO_TEST_BENCH_WIRING 0
#define SCOREX_DRIVEN_SIM_VALUE 0
#define SCOREX_EDGE_TYPE "NONE"
#define SCOREX_FREQ 50000000
#define SCOREX_HAS_IN 0
#define SCOREX_HAS_OUT 1
#define SCOREX_HAS_TRI 0
#define SCOREX_IRQ -1
#define SCOREX_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SCOREX_IRQ_TYPE "NONE"
#define SCOREX_NAME "/dev/ScoreX"
#define SCOREX_RESET_VALUE 0
#define SCOREX_SPAN 16
#define SCOREX_TYPE "altera_avalon_pio"


/*
 * ScoreX2 configuration
 *
 */

#define ALT_MODULE_CLASS_ScoreX2 altera_avalon_pio
#define SCOREX2_BASE 0x160
#define SCOREX2_BIT_CLEARING_EDGE_REGISTER 0
#define SCOREX2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SCOREX2_CAPTURE 0
#define SCOREX2_DATA_WIDTH 16
#define SCOREX2_DO_TEST_BENCH_WIRING 0
#define SCOREX2_DRIVEN_SIM_VALUE 0
#define SCOREX2_EDGE_TYPE "NONE"
#define SCOREX2_FREQ 50000000
#define SCOREX2_HAS_IN 0
#define SCOREX2_HAS_OUT 1
#define SCOREX2_HAS_TRI 0
#define SCOREX2_IRQ -1
#define SCOREX2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SCOREX2_IRQ_TYPE "NONE"
#define SCOREX2_NAME "/dev/ScoreX2"
#define SCOREX2_RESET_VALUE 0
#define SCOREX2_SPAN 16
#define SCOREX2_TYPE "altera_avalon_pio"


/*
 * ScoreY configuration
 *
 */

#define ALT_MODULE_CLASS_ScoreY altera_avalon_pio
#define SCOREY_BASE 0xf0
#define SCOREY_BIT_CLEARING_EDGE_REGISTER 0
#define SCOREY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SCOREY_CAPTURE 0
#define SCOREY_DATA_WIDTH 16
#define SCOREY_DO_TEST_BENCH_WIRING 0
#define SCOREY_DRIVEN_SIM_VALUE 0
#define SCOREY_EDGE_TYPE "NONE"
#define SCOREY_FREQ 50000000
#define SCOREY_HAS_IN 0
#define SCOREY_HAS_OUT 1
#define SCOREY_HAS_TRI 0
#define SCOREY_IRQ -1
#define SCOREY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SCOREY_IRQ_TYPE "NONE"
#define SCOREY_NAME "/dev/ScoreY"
#define SCOREY_RESET_VALUE 0
#define SCOREY_SPAN 16
#define SCOREY_TYPE "altera_avalon_pio"


/*
 * ScoreY2 configuration
 *
 */

#define ALT_MODULE_CLASS_ScoreY2 altera_avalon_pio
#define SCOREY2_BASE 0x150
#define SCOREY2_BIT_CLEARING_EDGE_REGISTER 0
#define SCOREY2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SCOREY2_CAPTURE 0
#define SCOREY2_DATA_WIDTH 16
#define SCOREY2_DO_TEST_BENCH_WIRING 0
#define SCOREY2_DRIVEN_SIM_VALUE 0
#define SCOREY2_EDGE_TYPE "NONE"
#define SCOREY2_FREQ 50000000
#define SCOREY2_HAS_IN 0
#define SCOREY2_HAS_OUT 1
#define SCOREY2_HAS_TRI 0
#define SCOREY2_IRQ -1
#define SCOREY2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SCOREY2_IRQ_TYPE "NONE"
#define SCOREY2_NAME "/dev/ScoreY2"
#define SCOREY2_RESET_VALUE 0
#define SCOREY2_SPAN 16
#define SCOREY2_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x1c0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x1c0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x1c0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "flappy_bird_control"


/*
 * TextX configuration
 *
 */

#define ALT_MODULE_CLASS_TextX altera_avalon_pio
#define TEXTX_BASE 0xe0
#define TEXTX_BIT_CLEARING_EDGE_REGISTER 0
#define TEXTX_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TEXTX_CAPTURE 0
#define TEXTX_DATA_WIDTH 16
#define TEXTX_DO_TEST_BENCH_WIRING 0
#define TEXTX_DRIVEN_SIM_VALUE 0
#define TEXTX_EDGE_TYPE "NONE"
#define TEXTX_FREQ 50000000
#define TEXTX_HAS_IN 0
#define TEXTX_HAS_OUT 1
#define TEXTX_HAS_TRI 0
#define TEXTX_IRQ -1
#define TEXTX_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TEXTX_IRQ_TYPE "NONE"
#define TEXTX_NAME "/dev/TextX"
#define TEXTX_RESET_VALUE 0
#define TEXTX_SPAN 16
#define TEXTX_TYPE "altera_avalon_pio"


/*
 * TextY configuration
 *
 */

#define ALT_MODULE_CLASS_TextY altera_avalon_pio
#define TEXTY_BASE 0xd0
#define TEXTY_BIT_CLEARING_EDGE_REGISTER 0
#define TEXTY_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TEXTY_CAPTURE 0
#define TEXTY_DATA_WIDTH 16
#define TEXTY_DO_TEST_BENCH_WIRING 0
#define TEXTY_DRIVEN_SIM_VALUE 0
#define TEXTY_EDGE_TYPE "NONE"
#define TEXTY_FREQ 50000000
#define TEXTY_HAS_IN 0
#define TEXTY_HAS_OUT 1
#define TEXTY_HAS_TRI 0
#define TEXTY_IRQ -1
#define TEXTY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TEXTY_IRQ_TYPE "NONE"
#define TEXTY_NAME "/dev/TextY"
#define TEXTY_RESET_VALUE 0
#define TEXTY_SPAN 16
#define TEXTY_TYPE "altera_avalon_pio"


/*
 * bird_x configuration
 *
 */

#define ALT_MODULE_CLASS_bird_x altera_avalon_pio
#define BIRD_X_BASE 0x30
#define BIRD_X_BIT_CLEARING_EDGE_REGISTER 0
#define BIRD_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BIRD_X_CAPTURE 0
#define BIRD_X_DATA_WIDTH 16
#define BIRD_X_DO_TEST_BENCH_WIRING 0
#define BIRD_X_DRIVEN_SIM_VALUE 0
#define BIRD_X_EDGE_TYPE "NONE"
#define BIRD_X_FREQ 50000000
#define BIRD_X_HAS_IN 0
#define BIRD_X_HAS_OUT 1
#define BIRD_X_HAS_TRI 0
#define BIRD_X_IRQ -1
#define BIRD_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BIRD_X_IRQ_TYPE "NONE"
#define BIRD_X_NAME "/dev/bird_x"
#define BIRD_X_RESET_VALUE 0
#define BIRD_X_SPAN 16
#define BIRD_X_TYPE "altera_avalon_pio"


/*
 * bird_y configuration
 *
 */

#define ALT_MODULE_CLASS_bird_y altera_avalon_pio
#define BIRD_Y_BASE 0x20
#define BIRD_Y_BIT_CLEARING_EDGE_REGISTER 0
#define BIRD_Y_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BIRD_Y_CAPTURE 0
#define BIRD_Y_DATA_WIDTH 16
#define BIRD_Y_DO_TEST_BENCH_WIRING 0
#define BIRD_Y_DRIVEN_SIM_VALUE 0
#define BIRD_Y_EDGE_TYPE "NONE"
#define BIRD_Y_FREQ 50000000
#define BIRD_Y_HAS_IN 0
#define BIRD_Y_HAS_OUT 1
#define BIRD_Y_HAS_TRI 0
#define BIRD_Y_IRQ -1
#define BIRD_Y_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BIRD_Y_IRQ_TYPE "NONE"
#define BIRD_Y_NAME "/dev/bird_y"
#define BIRD_Y_RESET_VALUE 0
#define BIRD_Y_SPAN 16
#define BIRD_Y_TYPE "altera_avalon_pio"


/*
 * bird_y2 configuration
 *
 */

#define ALT_MODULE_CLASS_bird_y2 altera_avalon_pio
#define BIRD_Y2_BASE 0x140
#define BIRD_Y2_BIT_CLEARING_EDGE_REGISTER 0
#define BIRD_Y2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BIRD_Y2_CAPTURE 0
#define BIRD_Y2_DATA_WIDTH 16
#define BIRD_Y2_DO_TEST_BENCH_WIRING 0
#define BIRD_Y2_DRIVEN_SIM_VALUE 0
#define BIRD_Y2_EDGE_TYPE "NONE"
#define BIRD_Y2_FREQ 50000000
#define BIRD_Y2_HAS_IN 0
#define BIRD_Y2_HAS_OUT 1
#define BIRD_Y2_HAS_TRI 0
#define BIRD_Y2_IRQ -1
#define BIRD_Y2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BIRD_Y2_IRQ_TYPE "NONE"
#define BIRD_Y2_NAME "/dev/bird_y2"
#define BIRD_Y2_RESET_VALUE 0
#define BIRD_Y2_SPAN 16
#define BIRD_Y2_TYPE "altera_avalon_pio"


/*
 * first configuration
 *
 */

#define ALT_MODULE_CLASS_first altera_avalon_pio
#define FIRST_BASE 0x130
#define FIRST_BIT_CLEARING_EDGE_REGISTER 0
#define FIRST_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FIRST_CAPTURE 0
#define FIRST_DATA_WIDTH 16
#define FIRST_DO_TEST_BENCH_WIRING 0
#define FIRST_DRIVEN_SIM_VALUE 0
#define FIRST_EDGE_TYPE "NONE"
#define FIRST_FREQ 50000000
#define FIRST_HAS_IN 0
#define FIRST_HAS_OUT 1
#define FIRST_HAS_TRI 0
#define FIRST_IRQ -1
#define FIRST_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIRST_IRQ_TYPE "NONE"
#define FIRST_NAME "/dev/first"
#define FIRST_RESET_VALUE 0
#define FIRST_SPAN 16
#define FIRST_TYPE "altera_avalon_pio"


/*
 * first2 configuration
 *
 */

#define ALT_MODULE_CLASS_first2 altera_avalon_pio
#define FIRST2_BASE 0x190
#define FIRST2_BIT_CLEARING_EDGE_REGISTER 0
#define FIRST2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FIRST2_CAPTURE 0
#define FIRST2_DATA_WIDTH 16
#define FIRST2_DO_TEST_BENCH_WIRING 0
#define FIRST2_DRIVEN_SIM_VALUE 0
#define FIRST2_EDGE_TYPE "NONE"
#define FIRST2_FREQ 50000000
#define FIRST2_HAS_IN 0
#define FIRST2_HAS_OUT 1
#define FIRST2_HAS_TRI 0
#define FIRST2_IRQ -1
#define FIRST2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIRST2_IRQ_TYPE "NONE"
#define FIRST2_NAME "/dev/first2"
#define FIRST2_RESET_VALUE 0
#define FIRST2_SPAN 16
#define FIRST2_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x1c0
#define JTAG_UART_0_IRQ 5
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * keycode configuration
 *
 */

#define ALT_MODULE_CLASS_keycode altera_avalon_pio
#define KEYCODE_BASE 0xc0
#define KEYCODE_BIT_CLEARING_EDGE_REGISTER 0
#define KEYCODE_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYCODE_CAPTURE 0
#define KEYCODE_DATA_WIDTH 8
#define KEYCODE_DO_TEST_BENCH_WIRING 0
#define KEYCODE_DRIVEN_SIM_VALUE 0
#define KEYCODE_EDGE_TYPE "NONE"
#define KEYCODE_FREQ 50000000
#define KEYCODE_HAS_IN 1
#define KEYCODE_HAS_OUT 0
#define KEYCODE_HAS_TRI 0
#define KEYCODE_IRQ -1
#define KEYCODE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEYCODE_IRQ_TYPE "NONE"
#define KEYCODE_NAME "/dev/keycode"
#define KEYCODE_RESET_VALUE 0
#define KEYCODE_SPAN 16
#define KEYCODE_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x0
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "flappy_bird_control_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 16
#define ONCHIP_MEMORY2_0_SPAN 16
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * pipe1 configuration
 *
 */

#define ALT_MODULE_CLASS_pipe1 altera_avalon_pio
#define PIPE1_BASE 0x70
#define PIPE1_BIT_CLEARING_EDGE_REGISTER 0
#define PIPE1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIPE1_CAPTURE 0
#define PIPE1_DATA_WIDTH 16
#define PIPE1_DO_TEST_BENCH_WIRING 0
#define PIPE1_DRIVEN_SIM_VALUE 0
#define PIPE1_EDGE_TYPE "NONE"
#define PIPE1_FREQ 50000000
#define PIPE1_HAS_IN 0
#define PIPE1_HAS_OUT 1
#define PIPE1_HAS_TRI 0
#define PIPE1_IRQ -1
#define PIPE1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIPE1_IRQ_TYPE "NONE"
#define PIPE1_NAME "/dev/pipe1"
#define PIPE1_RESET_VALUE 0
#define PIPE1_SPAN 16
#define PIPE1_TYPE "altera_avalon_pio"


/*
 * pipe2 configuration
 *
 */

#define ALT_MODULE_CLASS_pipe2 altera_avalon_pio
#define PIPE2_BASE 0x60
#define PIPE2_BIT_CLEARING_EDGE_REGISTER 0
#define PIPE2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIPE2_CAPTURE 0
#define PIPE2_DATA_WIDTH 16
#define PIPE2_DO_TEST_BENCH_WIRING 0
#define PIPE2_DRIVEN_SIM_VALUE 0
#define PIPE2_EDGE_TYPE "NONE"
#define PIPE2_FREQ 50000000
#define PIPE2_HAS_IN 0
#define PIPE2_HAS_OUT 1
#define PIPE2_HAS_TRI 0
#define PIPE2_IRQ -1
#define PIPE2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIPE2_IRQ_TYPE "NONE"
#define PIPE2_NAME "/dev/pipe2"
#define PIPE2_RESET_VALUE 0
#define PIPE2_SPAN 16
#define PIPE2_TYPE "altera_avalon_pio"


/*
 * pipe3 configuration
 *
 */

#define ALT_MODULE_CLASS_pipe3 altera_avalon_pio
#define PIPE3_BASE 0x50
#define PIPE3_BIT_CLEARING_EDGE_REGISTER 0
#define PIPE3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIPE3_CAPTURE 0
#define PIPE3_DATA_WIDTH 16
#define PIPE3_DO_TEST_BENCH_WIRING 0
#define PIPE3_DRIVEN_SIM_VALUE 0
#define PIPE3_EDGE_TYPE "NONE"
#define PIPE3_FREQ 50000000
#define PIPE3_HAS_IN 0
#define PIPE3_HAS_OUT 1
#define PIPE3_HAS_TRI 0
#define PIPE3_IRQ -1
#define PIPE3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIPE3_IRQ_TYPE "NONE"
#define PIPE3_NAME "/dev/pipe3"
#define PIPE3_RESET_VALUE 0
#define PIPE3_SPAN 16
#define PIPE3_TYPE "altera_avalon_pio"


/*
 * pipe4 configuration
 *
 */

#define ALT_MODULE_CLASS_pipe4 altera_avalon_pio
#define PIPE4_BASE 0x90
#define PIPE4_BIT_CLEARING_EDGE_REGISTER 0
#define PIPE4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIPE4_CAPTURE 0
#define PIPE4_DATA_WIDTH 16
#define PIPE4_DO_TEST_BENCH_WIRING 0
#define PIPE4_DRIVEN_SIM_VALUE 0
#define PIPE4_EDGE_TYPE "NONE"
#define PIPE4_FREQ 50000000
#define PIPE4_HAS_IN 0
#define PIPE4_HAS_OUT 1
#define PIPE4_HAS_TRI 0
#define PIPE4_IRQ -1
#define PIPE4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIPE4_IRQ_TYPE "NONE"
#define PIPE4_NAME "/dev/pipe4"
#define PIPE4_RESET_VALUE 0
#define PIPE4_SPAN 16
#define PIPE4_TYPE "altera_avalon_pio"


/*
 * pipe5 configuration
 *
 */

#define ALT_MODULE_CLASS_pipe5 altera_avalon_pio
#define PIPE5_BASE 0x80
#define PIPE5_BIT_CLEARING_EDGE_REGISTER 0
#define PIPE5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIPE5_CAPTURE 0
#define PIPE5_DATA_WIDTH 16
#define PIPE5_DO_TEST_BENCH_WIRING 0
#define PIPE5_DRIVEN_SIM_VALUE 0
#define PIPE5_EDGE_TYPE "NONE"
#define PIPE5_FREQ 50000000
#define PIPE5_HAS_IN 0
#define PIPE5_HAS_OUT 1
#define PIPE5_HAS_TRI 0
#define PIPE5_IRQ -1
#define PIPE5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIPE5_IRQ_TYPE "NONE"
#define PIPE5_NAME "/dev/pipe5"
#define PIPE5_RESET_VALUE 0
#define PIPE5_SPAN 16
#define PIPE5_TYPE "altera_avalon_pio"


/*
 * pipe_x configuration
 *
 */

#define ALT_MODULE_CLASS_pipe_x altera_avalon_pio
#define PIPE_X_BASE 0x40
#define PIPE_X_BIT_CLEARING_EDGE_REGISTER 0
#define PIPE_X_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PIPE_X_CAPTURE 0
#define PIPE_X_DATA_WIDTH 16
#define PIPE_X_DO_TEST_BENCH_WIRING 0
#define PIPE_X_DRIVEN_SIM_VALUE 0
#define PIPE_X_EDGE_TYPE "NONE"
#define PIPE_X_FREQ 50000000
#define PIPE_X_HAS_IN 0
#define PIPE_X_HAS_OUT 1
#define PIPE_X_HAS_TRI 0
#define PIPE_X_IRQ -1
#define PIPE_X_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PIPE_X_IRQ_TYPE "NONE"
#define PIPE_X_NAME "/dev/pipe_x"
#define PIPE_X_RESET_VALUE 0
#define PIPE_X_SPAN 16
#define PIPE_X_TYPE "altera_avalon_pio"


/*
 * press configuration
 *
 */

#define ALT_MODULE_CLASS_press altera_avalon_pio
#define PRESS_BASE 0xb0
#define PRESS_BIT_CLEARING_EDGE_REGISTER 0
#define PRESS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PRESS_CAPTURE 0
#define PRESS_DATA_WIDTH 1
#define PRESS_DO_TEST_BENCH_WIRING 0
#define PRESS_DRIVEN_SIM_VALUE 0
#define PRESS_EDGE_TYPE "NONE"
#define PRESS_FREQ 50000000
#define PRESS_HAS_IN 1
#define PRESS_HAS_OUT 0
#define PRESS_HAS_TRI 0
#define PRESS_IRQ -1
#define PRESS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PRESS_IRQ_TYPE "NONE"
#define PRESS_NAME "/dev/press"
#define PRESS_RESET_VALUE 0
#define PRESS_SPAN 16
#define PRESS_TYPE "altera_avalon_pio"


/*
 * sdram configuration
 *
 */

#define ALT_MODULE_CLASS_sdram altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x8000000
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/sdram"
#define SDRAM_POWERUP_DELAY 200.0
#define SDRAM_REFRESH_PERIOD 7.8125
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SPAN 67108864
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * sdram_pll configuration
 *
 */

#define ALT_MODULE_CLASS_sdram_pll altpll
#define SDRAM_PLL_BASE 0x1a0
#define SDRAM_PLL_IRQ -1
#define SDRAM_PLL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_PLL_NAME "/dev/sdram_pll"
#define SDRAM_PLL_SPAN 16
#define SDRAM_PLL_TYPE "altpll"


/*
 * second configuration
 *
 */

#define ALT_MODULE_CLASS_second altera_avalon_pio
#define SECOND_BASE 0x120
#define SECOND_BIT_CLEARING_EDGE_REGISTER 0
#define SECOND_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SECOND_CAPTURE 0
#define SECOND_DATA_WIDTH 16
#define SECOND_DO_TEST_BENCH_WIRING 0
#define SECOND_DRIVEN_SIM_VALUE 0
#define SECOND_EDGE_TYPE "NONE"
#define SECOND_FREQ 50000000
#define SECOND_HAS_IN 0
#define SECOND_HAS_OUT 1
#define SECOND_HAS_TRI 0
#define SECOND_IRQ -1
#define SECOND_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SECOND_IRQ_TYPE "NONE"
#define SECOND_NAME "/dev/second"
#define SECOND_RESET_VALUE 0
#define SECOND_SPAN 16
#define SECOND_TYPE "altera_avalon_pio"


/*
 * second2 configuration
 *
 */

#define ALT_MODULE_CLASS_second2 altera_avalon_pio
#define SECOND2_BASE 0x180
#define SECOND2_BIT_CLEARING_EDGE_REGISTER 0
#define SECOND2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SECOND2_CAPTURE 0
#define SECOND2_DATA_WIDTH 16
#define SECOND2_DO_TEST_BENCH_WIRING 0
#define SECOND2_DRIVEN_SIM_VALUE 0
#define SECOND2_EDGE_TYPE "NONE"
#define SECOND2_FREQ 50000000
#define SECOND2_HAS_IN 0
#define SECOND2_HAS_OUT 1
#define SECOND2_HAS_TRI 0
#define SECOND2_IRQ -1
#define SECOND2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SECOND2_IRQ_TYPE "NONE"
#define SECOND2_NAME "/dev/second2"
#define SECOND2_RESET_VALUE 0
#define SECOND2_SPAN 16
#define SECOND2_TYPE "altera_avalon_pio"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x1b8
#define SYSID_QSYS_0_ID 0
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1449428733
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"


/*
 * text_on configuration
 *
 */

#define ALT_MODULE_CLASS_text_on altera_avalon_pio
#define TEXT_ON_BASE 0xa0
#define TEXT_ON_BIT_CLEARING_EDGE_REGISTER 0
#define TEXT_ON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TEXT_ON_CAPTURE 0
#define TEXT_ON_DATA_WIDTH 16
#define TEXT_ON_DO_TEST_BENCH_WIRING 0
#define TEXT_ON_DRIVEN_SIM_VALUE 0
#define TEXT_ON_EDGE_TYPE "NONE"
#define TEXT_ON_FREQ 50000000
#define TEXT_ON_HAS_IN 0
#define TEXT_ON_HAS_OUT 1
#define TEXT_ON_HAS_TRI 0
#define TEXT_ON_IRQ -1
#define TEXT_ON_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TEXT_ON_IRQ_TYPE "NONE"
#define TEXT_ON_NAME "/dev/text_on"
#define TEXT_ON_RESET_VALUE 0
#define TEXT_ON_SPAN 16
#define TEXT_ON_TYPE "altera_avalon_pio"


/*
 * third configuration
 *
 */

#define ALT_MODULE_CLASS_third altera_avalon_pio
#define THIRD_BASE 0x110
#define THIRD_BIT_CLEARING_EDGE_REGISTER 0
#define THIRD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define THIRD_CAPTURE 0
#define THIRD_DATA_WIDTH 16
#define THIRD_DO_TEST_BENCH_WIRING 0
#define THIRD_DRIVEN_SIM_VALUE 0
#define THIRD_EDGE_TYPE "NONE"
#define THIRD_FREQ 50000000
#define THIRD_HAS_IN 0
#define THIRD_HAS_OUT 1
#define THIRD_HAS_TRI 0
#define THIRD_IRQ -1
#define THIRD_IRQ_INTERRUPT_CONTROLLER_ID -1
#define THIRD_IRQ_TYPE "NONE"
#define THIRD_NAME "/dev/third"
#define THIRD_RESET_VALUE 0
#define THIRD_SPAN 16
#define THIRD_TYPE "altera_avalon_pio"


/*
 * third2 configuration
 *
 */

#define ALT_MODULE_CLASS_third2 altera_avalon_pio
#define THIRD2_BASE 0x170
#define THIRD2_BIT_CLEARING_EDGE_REGISTER 0
#define THIRD2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define THIRD2_CAPTURE 0
#define THIRD2_DATA_WIDTH 16
#define THIRD2_DO_TEST_BENCH_WIRING 0
#define THIRD2_DRIVEN_SIM_VALUE 0
#define THIRD2_EDGE_TYPE "NONE"
#define THIRD2_FREQ 50000000
#define THIRD2_HAS_IN 0
#define THIRD2_HAS_OUT 1
#define THIRD2_HAS_TRI 0
#define THIRD2_IRQ -1
#define THIRD2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define THIRD2_IRQ_TYPE "NONE"
#define THIRD2_NAME "/dev/third2"
#define THIRD2_RESET_VALUE 0
#define THIRD2_SPAN 16
#define THIRD2_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
