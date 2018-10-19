#	$NetBSD$

.include "../Makefile.inc"

.PATH:	${S}/dev/pci

KMOD=	twa
IOCONF=	twa.ioconf

SRCS+=	twa.c

CPPFLAGS+=	-DDIAGNOSTIC

.include <bsd.kmodule.mk>
