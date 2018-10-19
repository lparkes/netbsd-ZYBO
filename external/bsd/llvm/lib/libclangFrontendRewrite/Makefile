#	$NetBSD: Makefile,v 1.1 2011/02/06 01:14:07 joerg Exp $

LIB=	clangFrontendRewrite

.include <bsd.init.mk>

.PATH: ${CLANG_SRCDIR}/lib/Frontend/Rewrite

SRCS+=	FixItRewriter.cpp \
	FrontendActions.cpp \
	HTMLPrint.cpp \
	InclusionRewriter.cpp \
	RewriteMacros.cpp \
	RewriteModernObjC.cpp \
	RewriteObjC.cpp \
	RewriteTest.cpp


.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
