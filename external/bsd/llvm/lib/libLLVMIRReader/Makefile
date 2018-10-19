#	$NetBSD: Makefile,v 1.1 2013/01/23 15:02:59 joerg Exp $

LIB=	LLVMIRReader

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/IRReader

SRCS+=	IRReader.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
