extern "C"{

#include <riscv64_ll.h>
// int kmain(void);

int kmain(void){
	uint64_t time = 0;
	while(1){
		while(time - get_RTC() == 0);
		time = get_RTC();
		for(int i = time; i > 0; i /= 10){
			riscv64_io_output_char('0' + (i % 10));
		}
		riscv64_io_output_char('\r');
		riscv64_io_output_char('\n');
	}
	return 0;
}

}