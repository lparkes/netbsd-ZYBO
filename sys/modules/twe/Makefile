#	$NetBSD$

.include "../Makefile.inc"

.PATH:	${S}/dev/pci

KMOD=	twe
IOCONF=	twe.ioconf

SRCS+=	twe.c

CPPFLAGS+=	-DDIAGNOSTIC

.include <bsd.kmodule.mk>
