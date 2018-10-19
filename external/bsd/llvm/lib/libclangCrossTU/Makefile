#	$NetBSD$

LIB=	clangCrossTU

.include <bsd.init.mk>

.PATH: ${CLANG_SRCDIR}/lib/CrossTU

SRCS+=	CrossTranslationUnit.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
