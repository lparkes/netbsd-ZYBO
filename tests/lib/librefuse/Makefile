# $NetBSD: Makefile,v 1.4 2011/03/30 17:02:17 jruoho Exp $

NOMAN=		# defined

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/lib/librefuse

DPADD+=		${LIBREFUSE}
LDADD+=		-lrefuse

TESTS_C=	t_refuse_opt

.include <bsd.test.mk>
