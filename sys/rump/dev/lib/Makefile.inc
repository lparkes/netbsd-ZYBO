#	$NetBSD: Makefile.inc,v 1.7 2015/11/17 01:07:34 pooka Exp $
#

RUMPTOP=	${.CURDIR}/../../..

RUMPDEVLIBDIR:= ${.PARSEDIR}

.if defined(RUMP_COMPONENT) && !empty(RUMP_COMPONENT:Mioconf)
.PATH:	${RUMPDEVLIBDIR}
SRCS+=   component_simple.c
.endif

.include "${RUMPTOP}/Makefile.rump"
