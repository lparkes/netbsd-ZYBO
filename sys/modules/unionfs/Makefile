#	$NetBSD: Makefile,v 1.11 2003/03/16 08:26:49 jdolecek Exp $

.include "../Makefile.inc"

.PATH:	${S}/fs/unionfs

KMOD=	unionfs
SRCS=	unionfs_vfsops.c unionfs_vnops.c unionfs_subr.c

.include <bsd.kmodule.mk>
