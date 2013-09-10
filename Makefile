#
# Makefile for the SLIP network device drivers.
#

obj-$(CONFIG_SLIP) += slip.o
obj-$(CONFIG_SLHC) += slhc.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

clean:
	rm slip.ko slip.o slip.mod.o slip.mod.c;

