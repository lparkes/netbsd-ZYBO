# $NetBSD$

NOMAN=		# defined

CPPFLAGS+= -I${.CURDIR}/../../../sys

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/dev/clock_subr

.PATH:			${NETBSDSRCDIR}/sys/dev
TESTS_C+=		t_clock_subr
SRCS.t_clock_subr=	t_clock_subr.c clock_subr.c

.include <bsd.test.mk>
