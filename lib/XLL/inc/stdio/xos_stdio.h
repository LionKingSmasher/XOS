#ifndef __XOS_STDIO_H__
#define __XOS_STDIO_H__

#ifdef __QEMU_VIRT__
#define UART_RISCV64 (unsigned char*)(0x10000000)
#else
#define UART_RISCV64
#endif

namespace XLL{

void xos_print(const char*);

};

#endif