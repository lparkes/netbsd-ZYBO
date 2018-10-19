# $NetBSD: Makefile,v 1.4 2009/05/12 13:13:34 plunky Exp $

USE_FORT?= yes	# network client/server

PROG=		rfcomm_sppd
SRCS=		rfcomm_sppd.c

DPADD+=		${LIBBLUETOOTH}
LDADD+=		-lbluetooth

.include <bsd.prog.mk>
