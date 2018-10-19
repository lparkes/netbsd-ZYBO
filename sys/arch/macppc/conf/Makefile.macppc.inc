#	$NetBSD: Makefile.macppc.inc,v 1.1 2011/06/17 05:17:30 matt Exp $

.if ${PPC_ARCH_MODE} == "ppc64bridge"
AOPTS+=	${${ACTIVE_CC} == "gcc":? -Wa,-mppc64bridge :}
.endif

AFLAGS+=	${AOPTS}
