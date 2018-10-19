# $NetBSD$
#

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/net/if_l2tp

.for name in l2tp
TESTS_SH+=		t_${name}
TESTS_SH_SRC_t_${name}=	../net_common.sh t_${name}.sh
.endfor

.include <bsd.test.mk>
