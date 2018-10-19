/*	$NetBSD: math.h,v 1.6 2014/01/31 19:38:06 matt Exp $	*/

#define	__HAVE_NANF

#if defined(_LP64) || defined(_KERNEL)
#define	__HAVE_LONG_DOUBLE	128
#endif
