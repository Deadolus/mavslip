#
# Makefile for the SLIP network device drivers.
#

obj-$(CONFIG_SLIP) += slip.o
obj-$(CONFIG_SLHC) += slhc.o

all:
make -C /lib/modules/$(uname -r)/build M=$(pwd) modules

#clean:
#rm slip.ko slip.o slip.mod.o slip.mod.c;

