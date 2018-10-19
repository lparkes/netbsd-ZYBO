#	$NetBSD: Makefile.inc,v 1.2 2005/10/15 16:00:42 uwe Exp $

SRCS+=	compat_setjmp.S compat_sigsetjmp.S

# objects built from C sources in compat/gen
SRCS+=	compat_frexp_ieee754.c compat_ldexp_ieee754.c compat_modf_ieee754.c
