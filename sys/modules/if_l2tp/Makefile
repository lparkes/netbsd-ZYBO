# $NetBSD$

.include "../Makefile.inc"

.PATH:  ${S}/net ${S}/netinet ${S}/netinet6

KMOD=		if_l2tp
IOCONF=		l2tp.ioconf
SRCS=		if_l2tp.c in_l2tp.c in6_l2tp.c

CPPFLAGS+=	-DINET
CPPFLAGS+=	-DINET6

.include <bsd.kmodule.mk>
