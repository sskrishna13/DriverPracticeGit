# If called directly from the command line, invoke the kernel build system.
ifeq ($(KERNELRELEASE),)

#       KERNEL_SOURCE := /home/pradeep/Trainings/Timmins/Motorola/buildroot/output/build/linux-4.19.103
        KERNEL_SOURCE := /home/krishna-ubuntu/Documents/LKI/bbb-builds/OS/linux-4.19.103

        PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) clean

# Otherwise KERNELRELEASE is defined; we've been invoked from the
# kernel build system and can use its language.
else

        src-m := $(notdir $(wildcard ${SUBDIRS}/*.c))
        src-mod := $(notdir $(wildcard ${SUBDIRS}/*.mod.c))
        src-m := $(filter-out ${src-mod}, ${src-m})
        obj-m := $(src-m:.c=.o)

endif
