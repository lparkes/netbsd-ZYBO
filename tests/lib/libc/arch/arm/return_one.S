/*	$NetBSD: return_one.S,v 1.1 2011/07/18 23:16:09 jym Exp $ */

#include <machine/asm.h>

ENTRY_NP(return_one)
	mov	r0, #1
	RET
	.align	0
	.globl	return_one_end
return_one_end:
END(return_one)
