/*	$NetBSD: return_one.S,v 1.1 2011/07/18 23:16:09 jym Exp $ */

#include <machine/asm.h>

.globl	return_one_end	

ENTRY(return_one,0)
	mov	ret0=1
	br.ret.sptk.few  rp
return_one_end:	
END(return_one)
