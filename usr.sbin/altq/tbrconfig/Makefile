#	$NetBSD: Makefile,v 1.3 2001/12/14 00:52:34 lukem Exp $

.include <bsd.own.mk>		# for MKDYNAMICROOT definition

PROG=	tbrconfig
MAN=	tbrconfig.8

BINDIR=	/sbin
.if (${MKDYNAMICROOT} == "no")
LDSTATIC?=-static
.endif

CPPFLAGS+= -DALTQ -I${.CURDIR}/../libaltq

.include <bsd.prog.mk>
