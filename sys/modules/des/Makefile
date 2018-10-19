#	$NetBSD: Makefile,v 1.2 2010/09/19 05:42:10 mrg Exp $

.include "../Makefile.inc"

.PATH:	${S}/crypto/des

KMOD=	des
SRCS=	des_module.c
SRCS+=	des_ecb.c
SRCS+=	des_setkey.c
SRCS+=	des_enc.c
SRCS+=	des_cbc.c


.include <bsd.kmodule.mk>
