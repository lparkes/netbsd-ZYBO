# $NetBSD: Makefile,v 1.1 2016/08/06 06:06:54 christos Exp $

.include "../Makefile.inc"

.PATH:  ${S}/net

KMOD=		if_strip
IOCONF=		strip.ioconf
SRCS=		if_strip.c

CPPFLAGS+=	-DINET

.include <bsd.kmodule.mk>
