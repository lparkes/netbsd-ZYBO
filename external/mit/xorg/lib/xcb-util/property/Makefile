#	$NetBSD: Makefile,v 1.1 2010/07/18 07:01:39 mrg Exp $

XCBUTIL=	property

SRCS=	property.c

SHLIB_MAJOR=	1

XCBUTIL_EXTRA_DPLIBS+=\
	xcb-event	${.CURDIR}/../event

.include "../xcb-util.mk"

CPPFLAGS+=	-I${X11SRCDIR.xcb-util}/event
