#	$NetBSD: Makefile,v 1.2 2011/08/11 23:15:38 joerg Exp $

NOPIC=	1

.include <bsd.own.mk>

.include "../Makefile.libx11"
.include "../Makefile.ximcp"
.include "../Makefile.xlcDef"
.include "../Makefile.xlcUTF8Load"
.include "../Makefile.xlibi18n"
.include "../Makefile.xomGeneric"

SRCS+=	\
	${SRCS.ximcp} \
	${SRCS.xlcDef} \
	${SRCS.xlcUTF8Load} \
	${SRCS.xlibi18n} \
	${SRCS.xomGeneric}

SRCS+=	\
	XlcDL.c \
	XlcSL.c

CWARNFLAGS.clang+=	-Wno-parentheses

.include <bsd.x11.mk>
.include <bsd.lib.mk>
