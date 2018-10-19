# $NetBSD: Makefile,v 1.1 2012/09/16 13:47:42 rmind Exp $

.include "../Makefile.inc"

.PATH:		${S}/net/npf

KMOD=		npf_ext_log

SRCS=		npf_ext_log.c

CPPFLAGS+=	-I${NETBSDSRCDIR}/sys/external/bsd/libnv/dist

.include <bsd.kmodule.mk>
