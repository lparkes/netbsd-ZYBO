#	$NetBSD: Makefile,v 1.1 2009/06/23 15:02:51 tron Exp $

NOMAN=	# defined

.include <bsd.own.mk>

PROG=	discard

DIST=	${NETBSDSRCDIR}/external/ibm-public/postfix/dist/src/${PROG}
.PATH:	${DIST}

SRCS	= discard.c

DPADD+= ${LIBPMASTER} ${LIBPGLOBAL} ${LIBPUTIL}
LDADD+= ${LIBPMASTER} ${LIBPGLOBAL} ${LIBPUTIL}

.include <bsd.prog.mk>
