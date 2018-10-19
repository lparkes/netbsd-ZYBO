# $NetBSD: Makefile,v 1.3 2006/09/26 19:18:19 plunky Exp $

USE_FORT?= yes	# network server

PROG=		bthcid
MAN=		bthcid.8
SRCS=		bthcid.c hci.c client.c config.c

DPADD+=		${LIBBLUETOOTH} ${LIBEVENT} ${LIBPROP} ${LIBUTIL}
LDADD+=		-lbluetooth -levent -lprop -lutil

.include <bsd.prog.mk>
