#	$NetBSD: Makefile,v 1.5 2002/12/13 02:36:37 lukem Exp $

NOMAN=	# defined

PROG=	sgivol
.if (${HOSTPROG:U} == "")
DPADD+=	${LIBUTIL}
LDADD+=	-lutil
.endif

WARNS=	2

.include <bsd.prog.mk>
