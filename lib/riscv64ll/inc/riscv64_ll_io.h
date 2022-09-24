#ifndef __RISCV_64_LL_IO_H__
#define __RISCV_64_LL_IO_H__
#include "riscv64_ll_int.h"
#define UART_QEMU (volatile uint32_t*)(0x10000000) // UART Address
void riscv64_io_output_char(uint8_t c);
char riscv64_io_input_char();
#endif