# $NetBSD: Makefile,v 1.1 2015/11/05 00:02:59 knakahara Exp $
#

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/net/if_gif

.for name in gif
TESTS_SH+=		t_${name}
TESTS_SH_SRC_t_${name}=	../net_common.sh t_${name}.sh
.endfor

.include <bsd.test.mk>
