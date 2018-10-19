# $NetBSD: Makefile,v 1.4 2009/05/12 13:11:18 plunky Exp $
#

PROG=	btpand
MAN=	btpand.8
SRCS=	btpand.c bnep.c channel.c client.c packet.c server.c tap.c

DPADD+=	${LIBBLUETOOTH} ${LIBEVENT} ${LIBUTIL}
LDADD+=	-lbluetooth -levent -lutil

.include <bsd.prog.mk>
