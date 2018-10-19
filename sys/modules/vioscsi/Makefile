#	$NetBSD: Makefile,v 1.1 2016/09/27 03:53:08 pgoyette Exp $

.include "../Makefile.inc"

.PATH:	${S}/dev/pci

KMOD=	vioscsi
IOCONF=	vioscsi.ioconf

SRCS+=	vioscsi.c

DBG+=	-DDEBUG -DDIAGNOSTIC -DLOCKDEBUG

.include <bsd.kmodule.mk>
