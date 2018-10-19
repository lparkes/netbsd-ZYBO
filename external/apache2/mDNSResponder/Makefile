#	$NetBSD: Makefile,v 1.2 2009/10/05 03:54:17 tsarna Exp $

.include <bsd.own.mk>

SUBDIR=	usr.bin usr.sbin
.if (${MKPIC} != "no")
SUBDIR+= nss
.endif

.include <bsd.subdir.mk>
