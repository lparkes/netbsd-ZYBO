#	$NetBSD: Makefile,v 1.8 2016/02/27 21:47:34 joerg Exp $

LIB=	LLVMRuntimeDyld

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/ExecutionEngine/RuntimeDyld
.PATH: ${LLVM_SRCDIR}/lib/ExecutionEngine/RuntimeDyld/Targets

SRCS+=	JITSymbol.cpp \
	RTDyldMemoryManager.cpp \
	RuntimeDyld.cpp \
	RuntimeDyldCOFF.cpp \
	RuntimeDyldChecker.cpp \
	RuntimeDyldELF.cpp \
	RuntimeDyldMachO.cpp

SRCS+=	RuntimeDyldELFMips.cpp

.include <bsd.lib.mk>
