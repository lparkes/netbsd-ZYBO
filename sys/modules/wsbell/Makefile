#	$NetBSD: Makefile,v 1.3 2015/08/20 11:05:02 christos Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev/wscons

CPPFLAGS+=	-DNWSMUX=1

KMOD=	wsbell
IOCONF=	wsbell.ioconf
SRCS=	wsbell.c

.include <bsd.kmodule.mk>
