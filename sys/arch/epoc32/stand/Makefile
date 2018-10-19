#	$NetBSD: Makefile,v 1.1 2013/04/28 12:11:27 kiyohara Exp $

.include <bsd.endian.mk>

.if ${MACHINE} == "epoc32" && ${TARGET_ENDIANNESS} == "1234"

SUBDIR+=	e32boot

.endif

.include <bsd.subdir.mk>
