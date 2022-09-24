ARCH=riscv64-elf-

INC-FOLDER=inc/

SRC-FILE= \
	src/riscv64_ll_io.c \
	src/riscv64_ll_rtc.c

OBJ-FILE=\
	src/riscv64_ll_io.o

OUTPUT=libriscv64ll.a

%.o: %.c
	$(ARCH)gcc -nostdlib -nostdinc -c -o $@ $^ -I$(INC-FOLDER)

$(OUTPUT) : $(SRC-FILE:.c=.o)
	$(ARCH)ar crv $@ $^

clean:
	rm -rf $(SRC-FILE:.c=.o)
	rm -rf $(OUTPUT)