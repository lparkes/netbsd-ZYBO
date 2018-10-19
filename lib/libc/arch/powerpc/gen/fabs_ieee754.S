/*	$NetBSD: _setjmp.S,v 1.3 2011/01/15 07:31:12 matt Exp $	*/

#include <machine/asm.h>

#if defined(LIBC_SCCS)
__RCSID("$NetBSD: _setjmp.S,v 1.3 2011/01/15 07:31:12 matt Exp $")
#endif

ENTRY(fabs)
	fabs %f1,%f1
	blr
END(fabs)
