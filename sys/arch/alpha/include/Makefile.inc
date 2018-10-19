# $NetBSD: Makefile.inc,v 1.1 1999/03/10 06:41:48 ross Exp $

.if !defined(_ALPHA_MAKEFILE_INC)
_ALPHA_MAKEFILE_INC=	yes

CFLAGS += -mno-fp-regs

.endif
