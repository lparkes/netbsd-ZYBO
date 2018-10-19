#	$NetBSD: Makefile,v 1.15 2008/01/10 05:15:07 lukem Exp $

.PATH:		${.CURDIR}/../lint1
.PATH:		${.CURDIR}/../../mkdep

PROG=		xlint
SRCS=		xlint.c mem.c findcc.c
PROGNAME= 	lint
MAN=		lint.1

CPPFLAGS+=	-I${.CURDIR}/../lint1
CPPFLAGS+=	-I${.CURDIR}/../../mkdep

.if (${HOSTPROG:U} == "")
DPADD+=		${LIBUTIL}
LDADD+=		-lutil
.endif

.include <bsd.prog.mk>
