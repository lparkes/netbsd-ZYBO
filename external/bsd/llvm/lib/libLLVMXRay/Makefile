#	$NetBSD: Makefile,v 1.1 2017/02/09 17:58:57 joerg Exp $

LIB=	LLVMXRay

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/XRay

SRCS+=	InstrumentationMap.cpp \
	Trace.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
