# $NetBSD: Makefile,v 1.1 2008/06/02 11:34:07 jmcneill Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev/pci

KMOD=   azalia
IOCONF=	azalia.ioconf

SRCS=	azalia.c
SRCS+=	azalia_codec.c

.include <bsd.kmodule.mk>
