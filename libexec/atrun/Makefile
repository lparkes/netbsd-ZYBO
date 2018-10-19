#	$NetBSD: Makefile,v 1.14 2011/08/16 10:35:03 christos Exp $

.include <bsd.own.mk>

PROG=	atrun
SRCS=	atrun.c
BINDIR=	/usr/libexec
MAN=	atrun.8

.PATH.c: ${NETBSDSRCDIR}/usr.bin/at
SRCS+=	privs.c

CPPFLAGS+= -I${NETBSDSRCDIR}/usr.bin/at
COPTS.atrun.c = -Wno-format-nonliteral

.include <bsd.prog.mk>
