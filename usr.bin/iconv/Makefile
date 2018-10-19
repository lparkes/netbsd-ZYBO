#	$NetBSD: Makefile,v 1.5 2006/08/26 18:17:42 christos Exp $

.include <bsd.own.mk>

PROG=		iconv
SRCS=		iconv.c
CPPFLAGS+=	-I. -I${.CURDIR} -I${NETBSDSRCDIR}/lib/libc
MAN=		iconv.1

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
