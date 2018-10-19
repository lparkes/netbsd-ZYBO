/* $NetBSD: ltsf2.c,v 1.1 2000/06/06 08:15:06 bjh21 Exp $ */

/*
 * Written by Ben Harris, 2000.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: ltsf2.c,v 1.1 2000/06/06 08:15:06 bjh21 Exp $");
#endif /* LIBC_SCCS and not lint */

int __aeabi_dcmplt(float64, float64);

int
__aeabi_dcmplt(float64 a, float64 b)
{

	return float64_lt(a, b);
}
