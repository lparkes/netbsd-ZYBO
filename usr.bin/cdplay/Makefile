#	$NetBSD: Makefile,v 1.5 2009/04/14 22:15:18 lukem Exp $

PROG=	cdplay
SRCS=	cdplay.c

LDADD+= -ledit -lterminfo -lutil
DPADD+= ${LIBEDIT} ${LIBTERMINFO} ${LIBUTIL}

.include <bsd.prog.mk>
