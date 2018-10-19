# $NetBSD: Makefile,v 1.1 2016/08/06 06:06:54 christos Exp $

.include "../Makefile.inc"

.PATH:  ${S}/net

KMOD=		if_gre
IOCONF=		gre.ioconf
SRCS=		if_gre.c

CPPFLAGS+=	-DINET
CPPFLAGS+=	-DINET6
CPPFLAGS+=	-DMPLS
CPPFLAGS+=	-DNETATALK

.include <bsd.kmodule.mk>
