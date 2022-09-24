ARCH=riscv64-elf-
SOURCE-FILE= \
	kmain.cc

ASM-FILE= \
	entry.s

OUTPUT=kernel.elf

%.o : %.cc
	$(ARCH)g++ -Wall -Wextra -c -mcmodel=medany $^ -o $@ -ffreestanding -I../lib/riscv64ll/inc

%.o : %.s
	$(ARCH)as -c $^ -o $@

$(OUTPUT) : $(ASM-FILE:.s=.o) $(SOURCE-FILE:.cc=.o)
	$(ARCH)ld -T linker.ld -nostdlib $^ -o $@ -L. -lriscv64ll

clear:
	rm -rf *.o
	rm -rf $(OUTPUT)