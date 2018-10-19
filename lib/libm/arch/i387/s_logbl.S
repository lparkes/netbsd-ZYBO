/*
 * Written by J.T. Conklin <jtc@NetBSD.org>.
 * Public domain.
 */

#include <machine/asm.h>

#include "abi.h"

RCSID("$NetBSD: s_logb.S,v 1.6 2003/07/26 19:25:02 salo Exp $")

ENTRY(logbl)
	fldt	ARG_LONG_DOUBLE_ONE
	fxtract
	fstp	%st
	ret
