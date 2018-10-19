#	$NetBSD: Makefile,v 1.5 2002/12/23 17:38:21 jdolecek Exp $

.include "../Makefile.inc"

.PATH:	${S}/fs/ntfs

KMOD=	ntfs

SRCS=	ntfs_compr.c ntfs_ihash.c ntfs_subr.c ntfs_vfsops.c ntfs_vnops.c \
	ntfs_conv.c

.include <bsd.kmodule.mk>
