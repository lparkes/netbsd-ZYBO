#	$NetBSD: Makefile,v 1.6 2001/12/12 01:48:56 tv Exp $

NOMAN=	# defined
.include <bsd.own.mk>

.if ${MACHINE} == "amiga"
PROG=videomode
CPPFLAGS+=-I${NETBSDSRCDIR}/sys/arch -D${MACHINE}
.endif

.include <bsd.prog.mk>
