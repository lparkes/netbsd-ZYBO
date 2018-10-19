# $NetBSD: Makefile,v 1.1 2013/03/12 20:49:22 christos Exp $

.include "../Makefile.inc"

.PATH:		${S}/net/npf

KMOD=		npf_ext_normalize

SRCS=		npf_ext_normalize.c

CPPFLAGS+=	-I${NETBSDSRCDIR}/sys/external/bsd/libnv/dist

.include <bsd.kmodule.mk>
