/*	$NetBSD: return_one.S,v 1.1 2011/07/18 23:16:10 jym Exp $ */

#include <machine/asm.h>

.global	return_one_end

ENTRY(return_one)
return_one:
	retl
	 mov 1, %o0
return_one_end:
