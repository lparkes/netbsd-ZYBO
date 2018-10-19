#	$NetBSD: Makefile,v 1.5 2015/04/28 15:13:45 christos Exp $

IMAGE=		sysinst.fs
IMAGESIZE?=	1440k
MAKEDEVTARGETS=	floppy
USE_SYSINST=	yes
IMGMAKEFSOPTIONS= -o bsize=4096,fsize=512,density=4096

.include "../common/Makefile.images"
