# $NetBSD: Makefile,v 1.1 2016/08/06 06:06:54 christos Exp $

.include "../Makefile.inc"

.PATH:  ${S}/net

KMOD=		if_srt
IOCONF=		srt.ioconf
SRCS=		if_srt.c

CPPFLAGS+=	-DINET
CPPFLAGS+=	-DINET6

.include <bsd.kmodule.mk>
