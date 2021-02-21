CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnull -O0

main.o:main.c
	$(CC) $(CFLAGS) $^ -O $@