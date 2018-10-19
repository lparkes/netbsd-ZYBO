# $NetBSD: Makefile,v 1.2 2011/08/28 15:48:19 jmcneill Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev/i2c

KMOD=	hythygtemp
IOCONF=	hythygtemp.ioconf
SRCS=	hytp14.c

.include <bsd.kmodule.mk>
