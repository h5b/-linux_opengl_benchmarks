ARCH := $(shell getconf LONG_BIT)

# Common include paths
TOP := $(dir $(lastword $(MAKEFILE_LIST)))
TOP := $(patsubst %/, %, $(TOP))
EXTRAINCDIRS = -I$(TOP)/include
CPPFLAGS += $(EXTRAINCDIRS)

