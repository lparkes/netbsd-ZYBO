#	$NetBSD$

.include "../Makefile.inc"

.PATH:		${S}/dev/gpio

KMOD=   	gpioirq
IOCONF=		gpioirq.ioconf
SRCS=		gpioirq.c

CPPFLAGS+=	-I${S}/gpio

.include <bsd.kmodule.mk>
