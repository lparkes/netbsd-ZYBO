#	$NetBSD: Makefile,v 1.3 2006/08/26 18:17:43 christos Exp $

NOMAN=	1

PROG=	spellprog
SRCS=	spellprog.c look.c
BINDIR=	/usr/libexec

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
