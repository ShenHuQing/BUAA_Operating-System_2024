#include <asm/asm.h>

LEAF(msyscall)
	// Just use 'syscall' instruction and return.

	/* Exercise 4.1: Your code here. */
	nop
	syscall
	jr ra
	nop
END(msyscall)
