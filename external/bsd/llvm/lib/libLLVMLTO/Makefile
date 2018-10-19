#	$NetBSD: Makefile,v 1.1 2013/09/29 12:12:00 joerg Exp $

LIB=	LLVMLTO

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/LTO

SRCS+=	Caching.cpp \
	LTO.cpp \
	LTOBackend.cpp \
	LTOCodeGenerator.cpp \
	LTOModule.cpp \
	ThinLTOCodeGenerator.cpp \
	UpdateCompilerUsed.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
