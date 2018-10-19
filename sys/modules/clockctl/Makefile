# $NetBSD: Makefile,v 1.2 2015/08/20 11:05:01 christos Exp $

.include "../Makefile.inc"

.PATH: ${S}/dev

KMOD=		clockctl
IOCONF=		clockctl.ioconf
SRCS=		clockctl.c

CPPFLAGS+=	-DNTP -DCOMPAT_50

.include <bsd.kmodule.mk>
