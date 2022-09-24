#include "riscv64_ll_rtc.h"

uint64_t get_RTC() {
    return *RTC_QEMU;
}