#	$NetBSD: Makefile,v 1.4 2011/06/20 07:44:01 mrg Exp $

PROG=	bootptest
SRCS=	bootptest.c print-bootp.c getether.c
MAN=	bootptest.8

COPTS.print-bootp.c+=	-Wno-pointer-sign

.include <bsd.prog.mk>
