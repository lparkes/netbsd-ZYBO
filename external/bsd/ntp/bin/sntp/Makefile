# $NetBSD: Makefile,v 1.5 2012/02/03 16:33:10 christos Exp $

USE_FORT?= yes	# network client/server

PROG=	sntp
MAN=	sntp.1
SRCS= \
	crypto.c \
	kod_management.c \
	log.c \
	main.c \
	networking.c \
	sntp-opts.c \
	sntp.c \
	utilities.c

BINDIR=	/usr/sbin

.include "${.CURDIR}/../Makefile.inc"

DIST=${IDIST}/sntp

CPPFLAGS+=-I${DIST} -I${DIST}/libopts

.PATH: ${DIST}

.include <bsd.own.mk>

CPPFLAGS+= -DLOCKNAME=\"/var/run/sntp.pid\"
CPPFLAGS+= -DSAVENAME=\"/var/db/sntp.state\"
LDADD+= -L${LIBISC} -liscntp -levent -lm
DPADD+=	${LIBM} ${LIBEVENT}

.include <bsd.prog.mk>
