#	$NetBSD$

.include "../Makefile.inc"

.PATH:	${S}/dev/ata

KMOD=	ataraid
IOCONF=	ataraid.ioconf

SRCS+=	ata_raid.c
SRCS+=	ata_raid_subr.c
SRCS+=	ata_raid_promise.c
SRCS+=	ata_raid_adaptec.c
SRCS+=	ata_raid_nvidia.c
SRCS+=	ata_raid_via.c
SRCS+=	ata_raid_jmicron.c
SRCS+=	ata_raid_intel.c

.include <bsd.kmodule.mk>
