# $NetBSD: Makefile,v 1.2 2015/05/26 00:42:07 ozaki-r Exp $
#

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/net/mcast

.for name in mcast
TESTS_SH+=		t_${name}
TESTS_SH_SRC_t_${name}=	../net_common.sh t_${name}.sh
.endfor

PROGS=		mcast
MAN.mcast=	# empty
BINDIR.mcast=	${TESTSDIR}

.include <bsd.test.mk>
