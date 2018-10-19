/*	$NetBSD: return_one.S,v 1.2 2012/03/16 08:51:47 matt Exp $ */

#include <machine/asm.h>

.globl	return_one, return_one_end

ENTRY_NP(return_one)
	l.addi	r11, r0, 1
	l.jr	lr
	l.nop
return_one_end:
END(return_one)
