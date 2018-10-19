#      $NetBSD$

.include "../Makefile.inc"

.PATH: ${S}/netinet

KMOD=	ip_ecn
SRCS=	ip_ecn.c

CPPFLAGS+=	-DINET
CPPFLAGS+=	-DINET6

.include <bsd.kmodule.mk>
