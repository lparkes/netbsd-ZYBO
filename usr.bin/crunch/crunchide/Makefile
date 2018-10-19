#	$NetBSD: Makefile,v 1.18 2014/01/26 18:24:29 matt Exp $

.include <bsd.own.mk>

PROG=   crunchide
SRCS=	crunchide.c

.for ofmt in ${OBJECT_FMTS}
CPPFLAGS+=	-DNLIST_${ofmt:tu}
SRCS+=		exec_${ofmt}.c
.endfor

.include <bsd.prog.mk>
