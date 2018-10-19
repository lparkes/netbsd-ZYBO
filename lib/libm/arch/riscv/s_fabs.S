/* $NetBSD: s_fabs.S,v 1.1 2014/09/19 17:36:25 matt Exp $ */

/* The contents of this file are in the public domain. */

#include <machine/asm.h>

ENTRY(fabs)
	fabs.d	fa0, fa0
	ret
END(fabs)
