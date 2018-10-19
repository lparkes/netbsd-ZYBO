# $NetBSD: Makefile,v 1.8 2014/02/08 19:15:34 jmmv Exp $

.include <bsd.init.mk>

TESTSDIR=	${TESTSBASE}/atf

TESTS_SUBDIRS=	atf-c \
		atf-c++ \
		atf-sh \
		test-programs

.if !(${MKKYUA} != "no")
TESTS_SUBDIRS+=	tools
.endif

.PATH:		${SRCDIR}

.include <bsd.test.mk>
