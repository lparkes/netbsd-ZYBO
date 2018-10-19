#	$NetBSD: Makefile,v 1.2 2009/04/14 22:15:26 lukem Exp $

WARNS?=	2	# XXX -Wcast-qual issues

PROG=	sdiff
SRCS=	common.c edit.c sdiff.c
CPPFLAGS+=-D_OPENBSD_SOURCE

LDADD+=	-lutil
DPADD+=	${LIBUTIL}

.include <bsd.prog.mk>
