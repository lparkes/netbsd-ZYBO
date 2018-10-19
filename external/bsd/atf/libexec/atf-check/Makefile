# $NetBSD: Makefile,v 1.2 2011/02/20 20:18:56 jmmv Exp $

.include <bsd.init.mk>

.PATH:		${SRCDIR}/atf-sh

BINDIR=		/usr/libexec
PROG_CXX=	atf-check
SRCS=		atf-check.cpp
MAN=		atf-check.1

LDADD+=		-latf-c++ -latf-c
DPADD+=		${LIBATF_CXX} ${LIBATF_C}

WARNS?=		2

.include <bsd.prog.mk>
