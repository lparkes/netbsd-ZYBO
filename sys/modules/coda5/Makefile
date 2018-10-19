#	$NetBSD: Makefile,v 1.1 2008/06/28 16:11:35 rumble Exp $

.include "../Makefile.inc"

.PATH:	${S}/coda 

KMOD=	coda5
IOCONF=	coda5.ioconf
SRCS=	coda_namecache.c coda_psdev.c coda_subr.c coda_venus.c \
	coda_vfsops.c coda_vnops.c

CPPFLAGS+=	-DCODA_COMPAT_5

.include <bsd.kmodule.mk>
