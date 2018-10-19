# $NetBSD: Makefile,v 1.7 2014/02/11 17:28:21 jmmv Exp $

USE_ATF_LIBTOOLS=	yes

.include <bsd.init.mk>

.PATH:		${SRCDIR}/tools

BINDIR=		/usr/bin
PROG_CXX=	atf-config
SRCS=		atf-config.cpp
MAN=		atf-config.1

CPPFLAGS+=	-I${SRCDIR}/tools

WARNS?=		2

.include <bsd.prog.mk>
