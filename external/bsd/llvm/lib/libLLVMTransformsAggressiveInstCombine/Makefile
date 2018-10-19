#	$NetBSD$

LIB=	LLVMTransformsAggressiveInstCombine

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/Transforms/AggressiveInstCombine

SRCS+=	AggressiveInstCombine.cpp \
	TruncInstCombine.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
