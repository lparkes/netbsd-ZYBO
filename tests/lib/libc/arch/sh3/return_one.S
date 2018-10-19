/*	$NetBSD: return_one.S,v 1.1 2011/07/18 23:16:10 jym Exp $ */

#include <machine/asm.h>

NENTRY(return_one)
	rts
	 mov	#1, r0
	SET_ENTRY_SIZE(return_one)
	.globl	return_one_end
return_one_end:
