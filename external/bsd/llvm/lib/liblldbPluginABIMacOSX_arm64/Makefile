#	$NetBSD: Makefile,v 1.1 2013/09/29 12:12:00 joerg Exp $

LIB=	lldbPluginABIMacOSX_arm64

.include <bsd.init.mk>

.PATH: ${LLDB_SRCDIR}/source/Plugins/ABI/MacOSX-arm64

SRCS+=	ABIMacOSX_arm64.cpp

.if defined(HOSTLIB)
.include <bsd.hostlib.mk>
.else
.include <bsd.lib.mk>
.endif
