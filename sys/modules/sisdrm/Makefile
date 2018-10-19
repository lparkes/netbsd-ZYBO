# $NetBSD: Makefile,v 1.5 2009/06/22 15:34:53 mrg Exp $

.include "../Makefile.inc"

.PATH:	${S}/external/bsd/drm/dist/bsd-core
.PATH:	${S}/external/bsd/drm/dist/shared-core

KMOD=   sisdrm
IOCONF=	sisdrm.ioconf

SRCS=	sis_drv.c
SRCS+=	sis_ds.c
SRCS+=	sis_mm.c

CPPFLAGS+=	-I${S}/external/bsd/drm/dist/bsd-core \
		-I${S}/external/bsd/drm/dist/shared-core

.include <bsd.kmodule.mk>
