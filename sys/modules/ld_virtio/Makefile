#	$NetBSD$

.include "../Makefile.inc"

.PATH:	${S}/dev/pci

KMOD=	ld_virtio
IOCONF=	ld_virtio.ioconf

SRCS+=	ld_virtio.c

CPPFLAGS+=	-DNBIO=1

.include <bsd.kmodule.mk>
