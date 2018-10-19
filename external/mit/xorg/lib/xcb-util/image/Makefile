#	$NetBSD: Makefile,v 1.2 2011/08/11 23:15:39 joerg Exp $

XCBUTIL=	image

SRCS=	\
	xcb_image.c

XCBUTIL_EXTRA_DPLIBS+=\
	xcb-shm	${.CURDIR}/../../libxcb/shm \
	xcb-aux	${.CURDIR}/../aux

.include "../xcb-util.mk"

CPPFLAGS+=	-I${X11SRCDIR.xcb-util}/aux

CWARNFLAGS.clang+=	-Wno-return-type
