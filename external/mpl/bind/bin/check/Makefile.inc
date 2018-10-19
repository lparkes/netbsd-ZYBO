#	$NetBSD: Makefile.inc,v 1.1 2018/08/12 13:02:24 christos Exp $

LDADD+=-lns
DPADD+=${LIBNS}

.include <bsd.own.mk>

.include "${.CURDIR}/../../Makefile.inc"

CPPFLAGS+=-DNAMED_CONFFILE=\"${SYSCONFDIR}/named.conf\"
BINDIR=/usr/sbin
CHECK=${IDIST}/bin/check

.PATH: ${CHECK}

PROG=${BASE}
SRCS=${BASE}.c check-tool.c
MAN=${BASE}.8
