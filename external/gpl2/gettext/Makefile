#	$NetBSD: Makefile,v 1.6 2015/06/03 14:42:51 christos Exp $

.include <bsd.own.mk>

SUBDIR=	lib .WAIT info bin 

.if ${MKNLS} != "no"
SUBDIR+=locale
.endif

.include <bsd.subdir.mk>
