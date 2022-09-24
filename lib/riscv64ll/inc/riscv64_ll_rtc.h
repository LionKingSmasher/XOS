#ifndef __RISCV_64_LL_RTC_H__
#define __RISCV_64_LL_RTC_H__
#include "riscv64_ll_int.h"
#define RTC_QEMU (volatile uint32_t*)(0x101000) // UART Address
uint64_t get_RTC();
#endif