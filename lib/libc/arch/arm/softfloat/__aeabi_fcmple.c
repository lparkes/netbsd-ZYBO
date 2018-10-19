/* $NetBSD: lesf2.c,v 1.1 2000/06/06 08:15:06 bjh21 Exp $ */

/*
 * Written by Ben Harris, 2000.  This file is in the Public Domain.
 */

#include "softfloat-for-gcc.h"
#include "milieu.h"
#include "softfloat.h"

#include <sys/cdefs.h>
#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: lesf2.c,v 1.1 2000/06/06 08:15:06 bjh21 Exp $");
#endif /* LIBC_SCCS and not lint */

int __aeabi_fcmple(float32, float32);

int
__aeabi_fcmple(float32 a, float32 b)
{

	return float32_le(a, b);
}
