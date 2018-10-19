/*	$NetBSD: endian_machdep.h,v 1.1 2000/03/17 00:09:20 mycroft Exp $	*/

/* XXX relying upon gcc symbol here... */
#ifdef __LITTLE_ENDIAN__
#define _BYTE_ORDER _LITTLE_ENDIAN
#else
#define _BYTE_ORDER _BIG_ENDIAN
#endif
#include <sh3/endian_machdep.h>
