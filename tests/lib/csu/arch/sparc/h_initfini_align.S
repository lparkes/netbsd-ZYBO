/*	$NetBSD: h_initfini_align.S,v 1.1 2013/11/15 20:00:20 martin Exp $	*/

#include <machine/asm.h>

RCSID("$NetBSD: h_initfini_align.S,v 1.1 2013/11/15 20:00:20 martin Exp $")

_ENTRY(check_stack_alignment)
	and	%sp, 7, %o1
	retl
	 not	%o1, %o0
