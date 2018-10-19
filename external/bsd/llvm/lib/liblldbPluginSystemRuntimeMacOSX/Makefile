#	$NetBSD: Makefile,v 1.2 2013/10/30 20:27:40 joerg Exp $

LIB=	lldbPluginSystemRuntimeMacOSX

.include <bsd.init.mk>

.PATH: ${LLDB_SRCDIR}/source/Plugins/SystemRuntime/MacOSX

SRCS+=	SystemRuntimeMacOSX.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
