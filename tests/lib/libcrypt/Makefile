# $NetBSD: Makefile,v 1.1 2010/08/25 16:46:36 jmmv Exp $

NOMAN=		# defined 

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/lib/libcrypt

LDADD+=		-lcrypt
DPADD+=		${LIBCRYPT}
WARNS?=		4

TESTS_C=	t_crypt

.include <bsd.test.mk>
