# $NetBSD: Makefile,v 1.1 2016/08/06 06:06:54 christos Exp $

.include "../Makefile.inc"

.PATH:  ${S}/net

KMOD=		if_stf
IOCONF=		stf.ioconf
SRCS=		if_stf.c

CPPFLAGS+=	-DINET
CPPFLAGS+=	-DINET6

.include <bsd.kmodule.mk>
