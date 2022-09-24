#include "riscv64_ll_io.h"

void riscv64_io_output_char(uint8_t c){
	*UART_QEMU = c;
}

char riscv64_io_input_char(){
	return *UART_QEMU;
}