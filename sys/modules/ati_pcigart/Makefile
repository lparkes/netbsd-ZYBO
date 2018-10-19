# $NetBSD: Makefile,v 1.4 2011/02/18 14:26:40 jmcneill Exp $

.include "../Makefile.inc"

.PATH:	${S}/external/bsd/drm/dist/bsd-core

KMOD=   ati_pcigart

SRCS=	ati_pcigart.c

CPPFLAGS+=	-I${S}/external/bsd/drm/dist/shared-core

.include <bsd.kmodule.mk>
