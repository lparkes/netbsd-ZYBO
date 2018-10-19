#	$NetBSD: Makefile,v 1.9 2006/09/16 00:57:49 uwe Exp $

.if ${USETOOLS} == "yes"
.include <bsd.init.mk>
PROG=		fixcoff
.include <bsd.prog.mk>
.else
.include <bsd.hostinit.mk>
HOSTPROG=	fixcoff
.include <bsd.hostprog.mk>
.endif
