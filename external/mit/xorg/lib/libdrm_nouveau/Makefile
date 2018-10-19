#      $NetBSD: Makefile,v 1.1 2015/10/13 04:33:21 mrg Exp $

.include <bsd.own.mk>

LIB=	drm_nouveau
.PATH: ${X11SRCDIR.drm}
.PATH: ${X11SRCDIR.drm}/nouveau

SRCS=	nouveau.c \
	pushbuf.c \
	bufctx.c \
	abi16.c

COPTS.nouveau.c+=	${${ACTIVE_CC} == "clang":? -Wno-error=gnu-variable-sized-type-not-at-end :}

CPPFLAGS+=	-I${DESTDIR}${X11INCDIR}/libdrm
CPPFLAGS+=	-I${DESTDIR}${X11INCDIR}/X11 -I${X11SRCDIR.drm}

LIBDPLIBS=	drm	${.CURDIR}/../libdrm

PKGCONFIG=	libdrm_nouveau
PKGDIST=	drm

.include "../libdrm/Makefile.defines"

.include <bsd.x11.mk>
.include <bsd.lib.mk>
