# $NetBSD: Makefile,v 1.1 2011/04/13 19:17:00 elric Exp $

.include <bsd.own.mk>
.include <${.CURDIR}/../../Makefile.inc>

.PATH: ${HEIMDIST}/kuser

PROG=	kimpersonate
SRCS=	kimpersonate.c
MAN=	kimpersonate.8

LDADD+= -lkafs -lheimntlm
DPADD+= ${LIBKAFS} ${LIBHEIMNTLM}

.include <${HEIMBASE}/Makefile.rules.inc>
.include <bsd.prog.mk>
