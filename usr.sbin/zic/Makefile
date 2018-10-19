#	$NetBSD: Makefile,v 1.19 2016/10/20 17:38:28 christos Exp $

.include "Makefile.inc"
.include <bsd.own.mk>

COPTS.zic.c	+= -Wno-format-nonliteral

PROG=	zic
SRCS=	zic.c
MAN=	zic.8
.if !empty(TOOL_CAT:M*/*) && !exists(${TOOL_CAT})
TZVERSION=0
.else
TZVERSION!= ${TOOL_CAT} ${NETBSDSRCDIR}/lib/libc/time/version
.endif
CPPFLAGS+=-DPKGVERSION='"(tzcode) "' -DTZVERSION='"${TZVERSION}"'

.PATH: ${NETBSDSRCDIR}/lib/libc/time

.if !defined(HOSTPROG)
LDADD+=-lutil
DPADD+=${LIBUTIL}
.endif

foo:
	echo ${TZVERSION}

.include <bsd.prog.mk>
