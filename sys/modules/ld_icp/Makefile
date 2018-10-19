#	$NetBSD$

.include "../Makefile.inc"

.PATH:	${S}/dev/ic

KMOD=	ld_icp
IOCONF=	ld_icp.ioconf

SRCS+=	ld_icp.c

CPPFLAGS+=	-DNBIO=1

.include <bsd.kmodule.mk>
