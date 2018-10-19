#	$NetBSD: Makefile,v 1.1 2008/11/24 11:26:49 ad Exp $

.include "../Makefile.inc"

.PATH:	${S}/miscfs/nullfs ${S}/miscfs/genfs

KMOD=	null
SRCS=	null_vfsops.c null_vnops.c

CWARNFLAGS.clang=	-Wno-conversion

.include <bsd.kmodule.mk>
