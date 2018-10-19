# $NetBSD: Makefile.inc,v 1.5 2012/08/10 12:12:21 joerg Exp $

.include "${.PARSEDIR}/../Makefile.inc"

DPADD+=		${LIBM}
LDADD+=		-lm
