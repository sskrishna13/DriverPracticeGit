Hello World

This the "Hello World" practice of Linux
kernel module.

Build and Clean

	. Build example .ko kernel module
	  according to the Makefile



	make


	. Clean

	make clean

Insert and Remove Module

These actions may need the super user
privilege

	. Insert

	insmod example.ko


	. Remove

	rmmod example.ko

Print the Kernel Ring Buffer

printk in the codes will write the kernel
message into the kernel ring buffer.

Use "dmesg" command to examine the kernel
ring buffer


STEPS
	1. make
	2. insmod example.ko
	3. dmesg
	4. rmmod example.ko
	5. make clean
