# $NetBSD: Makefile.inc,v 1.1 2015/02/21 12:50:23 joerg Exp $

.if !defined(RUMPKERNEL)
CFLAGS+=	 -mfloat-abi=soft
.endif
