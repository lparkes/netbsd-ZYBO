#	$NetBSD: Makefile,v 1.1 2015/12/18 18:56:47 christos Exp $

WARNS=6
PROG=sortinfo

.ifndef HOSTPROG
LDADD+=-lutil
DPADD+=${LIBUTIL}
.endif

.include <bsd.prog.mk>
