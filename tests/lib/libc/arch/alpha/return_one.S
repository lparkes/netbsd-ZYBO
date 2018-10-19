/*	$NetBSD: return_one.S,v 1.1 2011/07/18 23:16:09 jym Exp $ */

#include <machine/asm.h>

.globl	return_one, return_one_end;

return_one:
	lda	v0,1
	ret
return_one_end:
	nop
