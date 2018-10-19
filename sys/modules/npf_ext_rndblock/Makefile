# $NetBSD: Makefile,v 1.1 2012/12/10 00:32:25 rmind Exp $

.include "../Makefile.inc"

.PATH:		${S}/net/npf

KMOD=		npf_ext_rndblock

SRCS=		npf_ext_rndblock.c

CPPFLAGS+=	-I${NETBSDSRCDIR}/sys/external/bsd/libnv/dist

.include <bsd.kmodule.mk>
