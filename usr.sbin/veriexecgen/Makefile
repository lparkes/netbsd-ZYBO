# $NetBSD: Makefile,v 1.2 2006/09/18 10:09:31 elad Exp $

WARNS?=	2	# XXX -Wcast-qual -Wsign-compare

.include <bsd.own.mk>

PROG=	veriexecgen
MAN=	veriexecgen.8

LDADD+=-lutil
DPADD+=${LIBUTIL}

.include <bsd.prog.mk>
