#	$NetBSD: Makefile,v 1.4 2015/07/23 08:03:25 mrg Exp $

.include <bsd.own.mk>

SUBDIR+=	expat lua

.if ${MKX11} != "no"
SUBDIR+=	xorg
SUBDIR+=	.WAIT ctwm
.endif

.include <bsd.subdir.mk>
