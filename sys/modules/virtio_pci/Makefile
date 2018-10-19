#	$NetBSD$

.include "../Makefile.inc"

.PATH:	${S}/dev/pci

KMOD=	virtio_pci
IOCONF=	virtio_pci.ioconf

SRCS+=	virtio_pci.c

CPPFLAGS+=	-DDIAGNOSTIC

.include <bsd.kmodule.mk>
