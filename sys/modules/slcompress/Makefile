#	$NetBSD: Makefile,v 1.1 2013/12/28 19:25:07 pgoyette Exp $

.include "../Makefile.inc"

.PATH:	${S}/net

KMOD=	slcompress
SRCS=	slcompress.c

CPPFLAGS+=	-DINET

.include <bsd.kmodule.mk>
