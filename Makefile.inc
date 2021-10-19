# preliminaries
ifeq (, $(shell command -v nasm 2> /dev/null))
$(error "nasm not found in $(PATH), please install nasm")
endif

# Common include paths
TOP := $(dir $(lastword $(MAKEFILE_LIST)))
TOP := $(patsubst %/, %, $(TOP))
EXTRAINCDIRS = -I$(TOP)/include
CPPFLAGS += $(EXTRAINCDIRS)

