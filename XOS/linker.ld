ENTRY(start);
 
. = 0x80000000;
 
SECTIONS {
	/* Include entry point at start of binary */
	.text : ALIGN(1M) {
		*(.init);
		*(.text);
	}
	.bss : ALIGN(1M) {
		PROVIDE(bss_start = .);
		*(.bss);
		. += 1M;
		PROVIDE(stack_top = .);
		. += 1M;
		PROVIDE(global_pointer = .);
		PROVIDE(bss_end = .);
	}
	.rodata : ALIGN(1M) {
		*(.rodata);
	}
	.data : ALIGN(1M) {
		*(.data);
	}
	.process : ALIGN(4K) {
		*(.process);
	}
}