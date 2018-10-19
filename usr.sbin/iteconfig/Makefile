#   $NetBSD: Makefile,v 1.6 1997/10/25 06:58:18 lukem Exp $

.include <bsd.own.mk>

.if ${MACHINE} == "atari" || ${MACHINE} == "amiga"
PROG=iteconfig
CPPFLAGS+=-I${NETBSDSRCDIR}/sys/arch -D${MACHINE}
.endif

MAN=	iteconfig.8

.include <bsd.prog.mk>
