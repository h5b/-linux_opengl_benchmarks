SOURCES = \
	ogl1.c

OBJS = \
	cpuidc$(ARCH).o \
	cpuida$(ARCH).o

CLEANFILES += vga.txt
CLEANFILES += videogl.txt
CLEANFILES += videogl$(ARCH)

all:
	$(CC) $(CPPFLAGS) $(SOURCES) $(OBJS) -lrt -lc -lm -lglut -lGL -lGLU -o videogl$(ARCH)

clean:
	rm -rf $(CLEANFILES)

include ${CURDIR}/../Makefile.inc

