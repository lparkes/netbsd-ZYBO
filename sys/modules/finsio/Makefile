# $NetBSD: Makefile,v 1.1 2011/07/29 20:59:25 jmcneill Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev/isa

KMOD=	finsio
IOCONF=	finsio.ioconf
SRCS=	finsio_isa.c

WARNS=	4

.include <bsd.kmodule.mk>
