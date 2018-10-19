#	$NetBSD: Makefile,v 1.3 2008/09/13 04:32:30 cube Exp $

.include <bsd.own.mk>

LIB=	pthread-stubs
.PATH:	${X11SRCDIR.${LIB}}

SRCS=	stubs.c

CPPFLAGS+=	${X11FLAGS.THREADLIB} -I${X11SRCDIR.${LIB}}/../include

PKGDIST=	${LIB}

.include <bsd.x11.mk>
.include <bsd.lib.mk>
