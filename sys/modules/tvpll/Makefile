#	$NetBSD: Makefile,v 1.1 2010/12/27 15:43:41 jmcneill Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev/i2c

KMOD=	tvpll
SRCS=	tvpll.c tvpll_tuners.c

WARNS=	4

.include <bsd.kmodule.mk>
