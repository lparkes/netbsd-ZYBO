#	$NetBSD: Makefile,v 1.1 2010/06/14 14:36:15 pooka Exp $
#

.PATH:  ${.CURDIR}/../../../../fs/ptyfs

LIB=	rumpfs_ptyfs
COMMENT=/dev/pts pseudo file system

SRCS+=	ptyfs_subr.c ptyfs_vfsops.c ptyfs_vnops.c

.include <bsd.lib.mk>
.include <bsd.klinks.mk>
