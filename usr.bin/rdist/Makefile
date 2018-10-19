#	$NetBSD: Makefile,v 1.10 2000/07/03 02:51:32 matt Exp $
#	from: @(#)Makefile	8.3 (Berkeley) 7/19/93

USE_FORT?= yes	# network client/server

CPPFLAGS+= -I${.CURDIR}
PROG=	rdist
SRCS=	docmd.c expand.c gram.y lookup.c main.c server.c

.include <bsd.prog.mk>
