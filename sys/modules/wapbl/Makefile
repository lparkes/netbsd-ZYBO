#	$NetBSD: Makefile,v 1.9 2014/05/08 08:21:53 hannken Exp $

.include "../Makefile.inc"

.PATH:	${S}/kern

KMOD=	wapbl

CPPFLAGS+=      -DWAPBL

#CWARNFLAGS.clang=	-Wno-conversion

SRCS=	vfs_wapbl.c

.include <bsd.kmodule.mk>
