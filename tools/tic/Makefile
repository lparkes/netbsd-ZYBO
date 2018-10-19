#	$NetBSD: Makefile,v 1.4 2010/02/22 23:05:39 roy Exp $

HOSTPROGNAME=	${_TOOL_PREFIX}tic
HOST_SRCDIR=	usr.bin/tic
HOST_SRCS=	compile.c hash.c

TERMINFODIR=	${NETBSDSRCDIR}/lib/libterminfo

.include "${.CURDIR}/../Makefile.host"
.include "${TERMINFODIR}/Makefile.hash"

.PATH:		${TERMINFODIR}
