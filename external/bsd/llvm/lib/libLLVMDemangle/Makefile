#	$NetBSD$

LIB=	LLVMDemangle

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/Demangle

SRCS+=	ItaniumDemangle.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
