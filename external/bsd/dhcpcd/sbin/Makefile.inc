# $NetBSD: Makefile.inc,v 1.3 2017/01/11 12:19:43 joerg Exp $

.include <bsd.own.mk>		# for MKDYNAMICROOT definition

WARNS?=		5
BINDIR=		/sbin

.if (${MKDYNAMICROOT} == "no")
LDSTATIC?=	-static
.endif
