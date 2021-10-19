LBITS := $(shell getconf LONG_BIT)

SOURCES = \
	ogl1.c

CLEANFILES += *.o
CLEANFILES += vga.txt
CLEANFILES += videogl.txt
CLEANFILES += videogl$(LBITS)

ifeq ($(LBITS),64)
OBJS := \
	cpuida64.o \
	cpuidc64.o
else
OBJS := \
	cpuida.o \
	cpuidc.o
endif

%.o: %.asm
	nasm -f elf32 -g -F stabs cpuida.asm
	nasm -f elf64 -g -F stabs cpuida64.asm

%.o: cpuid%.c
	$(CC) $(CFLAGS) $< -c

all: $(OBJS)
	$(CC) $(CPPFLAGS) $(SOURCES) $(OBJS) -lrt -lc -lm -lglut -lGL -lGLU -o videogl$(LBITS)

clean:
	rm -rf $(CLEANFILES)

include ${CURDIR}/../Makefile.inc

