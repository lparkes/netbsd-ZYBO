#	$NetBSD$

.include "../Makefile.inc"

.PATH:		${S}/dev/gpio

KMOD=   	gpiopps
IOCONF=		gpiopps.ioconf
SRCS=		gpiopps.c

CPPFLAGS+=	-I${S}/gpio

.include <bsd.kmodule.mk>
