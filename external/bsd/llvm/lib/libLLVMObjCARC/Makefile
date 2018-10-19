#	$NetBSD: Makefile,v 1.2 2015/01/29 20:41:35 joerg Exp $

LIB=	LLVMObjCARC

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/lib/Transforms/ObjCARC

SRCS+=	DependencyAnalysis.cpp \
	ObjCARC.cpp \
	ObjCARCAPElim.cpp \
	ObjCARCContract.cpp \
	ObjCARCExpand.cpp \
	ObjCARCOpts.cpp \
	ProvenanceAnalysis.cpp \
	ProvenanceAnalysisEvaluator.cpp \
	PtrState.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
