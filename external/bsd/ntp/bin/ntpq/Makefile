#	$NetBSD: Makefile,v 1.6 2012/02/01 07:46:21 kardel Exp $

.include <bsd.own.mk>

PROG=	ntpq
MAN=	ntpq.8
BINDIR=	/usr/sbin

SRCS=	ntpq.c					\
	ntpq-subs.c				\
	ntpq-opts.c

LDADD+=		-L${LIBNTP} -lntp -L${LIBOPTS} -lopts -L${LIBISC} -liscntp -ledit -lterminfo -lm 
#DPADD+=		${LIBISC}/libiscntp.a ${LIBOPTS}/libopts.a  ${LIBNTP}/libntp.a ${LIBEDIT} ${LIBTERMINFO} ${LIBM}

.include "${.CURDIR}/../Makefile.inc"

DIST=${IDIST}/ntpq

CPPFLAGS+=-I${IDIST}/include -I${IDIST}/sntp/libopts

.PATH: ${DIST}

.include <bsd.prog.mk>
