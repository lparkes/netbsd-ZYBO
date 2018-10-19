#	$NetBSD: Makefile,v 1.9 2015/02/03 19:58:41 aymeric Exp $
#

NOMAN=	# defined
.include <bsd.init.mk>

PROG=txlt
CLEANFILES+=	txlt.c

.ifndef HOSTPROG
LDADD+=		-ll
DPADD+=		${LIBL}
.endif

.include <bsd.prog.mk>
