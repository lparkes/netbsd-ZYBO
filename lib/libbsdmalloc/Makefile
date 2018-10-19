# $NetBSD: Makefile,v 1.3 2011/04/10 16:47:39 joerg Exp $

NOMAN=1

WARNS=	2

.include <bsd.own.mk>

LIB=	bsdmalloc
SRCS=	malloc.c

CPPFLAGS+= -D_REENT -D_REENTRANT -I${.CURDIR}/../libc/include/

.include <bsd.lib.mk>
