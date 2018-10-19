#	$NetBSD: Makefile,v 1.1 2011/02/23 07:53:30 mrg Exp $

NOLINT=		1

.include <bsd.own.mk>

LIB=	X11-xcb

.PATH:	${X11SRCDIR.X11}/src
SRCS+=	x11_xcb.c

CPPFLAGS+=	-I${DESTDIR}${X11INCDIR}/X11

LIBDPLIBS+= \
	X11 ${.CURDIR}/../../libX11/dynamic

PKGDIST=	X11
PKGCONFIG=  	x11-xcb

.include <bsd.x11.mk>
.include <bsd.lib.mk>
