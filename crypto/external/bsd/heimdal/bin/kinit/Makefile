# $NetBSD: Makefile,v 1.1 2011/04/13 19:16:45 elric Exp $

.include <bsd.own.mk>
.include <${.CURDIR}/../../Makefile.inc>

USE_FORT?= yes	# cryptographic software

.PATH: ${HEIMDIST}/kuser

PROG= kinit
SRCS= kinit.c

CPPFLAGS+= -I${HEIMDIST}/lib/ntlm

LDADD+= -lkafs -lsl -lheimntlm
DPADD+= ${LIBKAFS} ${LIBSL} ${LIBHEIMNTLM}

.include <${HEIMBASE}/Makefile.rules.inc>
.include <bsd.prog.mk>
