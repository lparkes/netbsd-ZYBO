#	$NetBSD: Makefile,v 1.1 2018/02/25 08:20:28 pgoyette Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev
.PATH:	${S}/dev/pci

KMOD=	ichsmb
IOCONF= ichsmb.ioconf

SRCS+=	ichsmb.c

.include <bsd.kmodule.mk>
