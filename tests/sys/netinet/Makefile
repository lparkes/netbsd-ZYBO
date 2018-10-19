# $NetBSD: Makefile,v 1.8 2014/06/10 04:28:40 he Exp $
#
WARNS?=6
.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/sys/netinet
CPPFLAGS+=	-I${NETBSDSRCDIR}/sys -D_TEST

TESTS_C=	t_print

.include <bsd.test.mk>
