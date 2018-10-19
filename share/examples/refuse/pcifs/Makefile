# $NetBSD: Makefile,v 1.1 2007/04/15 15:22:44 agc Exp $

PROG=pcifs
SRCS=pcifs.c virtdir.c
LDADD+= -lrefuse
CPPFLAGS+= -g -I${.CURDIR}/../virtdir
MAN=pcifs.8
WARNS=4

.PATH: ${.CURDIR}/../virtdir

.include <bsd.prog.mk>
