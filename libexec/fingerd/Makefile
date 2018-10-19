#	$NetBSD: Makefile,v 1.8 1999/07/02 06:00:06 itojun Exp $
#	from: @(#)Makefile	8.1 (Berkeley) 6/4/93

.include <bsd.own.mk>

PROG=	fingerd
MAN=	fingerd.8

.if (${USE_INET6} != "no")
CPPFLAGS+=-DINET6
.endif

.include <bsd.prog.mk>
