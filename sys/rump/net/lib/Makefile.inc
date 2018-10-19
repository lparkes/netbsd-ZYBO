#	$NetBSD: Makefile.inc,v 1.6 2016/01/26 23:12:18 pooka Exp $
#

RUMPTOP=	${.CURDIR}/../../..

CWARNFLAGS.clang+=	-Wno-error=address-of-packed-member -Werror=constant-conversion

.include "${RUMPTOP}/Makefile.rump"
