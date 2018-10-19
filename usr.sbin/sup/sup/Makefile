#	$NetBSD: Makefile,v 1.4 2001/01/18 03:28:19 mycroft Exp $

PROG=	sup
SRCS=	supcmain.c supcvers.c supcparse.c supcname.c supcmisc.c supcmeat.c \
	read_line.c

.PATH:	${.CURDIR}/../source

DPADD=	${LIBSUP} ${LIBCRYPT}
LDADD=	${SUPLIB} -lcrypt

.include <bsd.prog.mk>
