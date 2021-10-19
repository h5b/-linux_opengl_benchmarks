include ${CURDIR}/../Makefile.inc

SOURCES = ogl1.c

CLEANFILES += *.o
CLEANFILES += vga.txt
CLEANFILES += videogl.txt
CLEANFILES += videogl$(LBITS)

ifeq ($(LBITS),64)
	OBJS := cpuida64.o cpuidc64.o
else
	OBJS := cpuida.o cpuidc.o
endif

%.o: %.asm
	$(NASM) $(ASM_FLAGS) -o $@ $<

%.o: cpuid%.c
	$(CC) $(CFLAGS) $< -c

all: $(OBJS)
	$(CC) $(CPPFLAGS) $(SOURCES) $(OBJS) $(LDFLAGS) -o videogl$(LBITS)

clean:
	rm -rf $(CLEANFILES)

