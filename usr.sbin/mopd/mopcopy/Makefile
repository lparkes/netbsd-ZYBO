#	$NetBSD: Makefile,v 1.1 2002/06/06 23:01:00 thorpej Exp $

PROG=	mopcopy

.include <bsd.own.mk>
.if ${MACHINE_CPU} == "mips"
CFLAGS+= -DNOAOUT
.endif

.include <bsd.prog.mk>
