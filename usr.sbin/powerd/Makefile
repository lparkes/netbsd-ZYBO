#	$NetBSD: Makefile,v 1.5 2009/04/22 15:23:06 lukem Exp $

PROG=	powerd
SRCS=	powerd.c

RUMPPRG=	powerd

.PATH: ${.CURDIR}/../../common/lib/libprop
CPPFLAGS+=	-DRUMP_ACTION
RUMPSRCS+=	prop_kern.c

DPADD+=	${LIBPROP} ${LIBUTIL}
LDADD+=	-lprop -lutil

MAN=	powerd.8

.include <bsd.prog.mk>
