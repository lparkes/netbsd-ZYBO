#	$NetBSD: Makefile,v 1.13 2001/11/03 13:40:30 lukem Exp $
#	@(#)Makefile	8.1 (Berkeley) 6/2/93

PROG=	ls
SRCS=	cmp.c ls.c main.c print.c util.c

LDADD+=	-lutil
DPADD+=	${LIBUTIL}

.include <bsd.prog.mk>
