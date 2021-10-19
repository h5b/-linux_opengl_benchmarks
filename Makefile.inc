LBITS := $(shell getconf LONG_BIT)

# preliminaries
ifeq (, $(shell command -v nasm 2> /dev/null))
$(error "nasm not found in $(PATH), please install nasm")
endif

# Common include paths
TOP := $(dir $(lastword $(MAKEFILE_LIST)))
TOP := $(patsubst %/, %, $(TOP))
EXTRAINCDIRS = -I$(TOP)/include

# Tools
NASM = nasm

# Flags
ASM_FLAGS = -f elf$(LBITS) -g -F stabs
CPPFLAGS += $(EXTRAINCDIRS)
LDFLAGS += -lc
LDFLAGS += -lGL
LDFLAGS += -lGLU
LDFLAGS += -lglut
LDFLAGS += -lm
LDFLAGS += -lrt
