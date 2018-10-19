#	$NetBSD: Makefile,v 1.5 2009/05/02 01:15:53 pooka Exp $
#

.include <bsd.own.mk>

MOUNTNAME=	ext2fs

LDADD+=		-lrumpfs_ffs
DPADD+=		${LIBRUMPFS_FFS}

ISRUMP=		# yea baby
RUMP_DISKFS=

.include <bsd.prog.mk>
