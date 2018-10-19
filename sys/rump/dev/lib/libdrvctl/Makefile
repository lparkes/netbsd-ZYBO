#	$NetBSD: Makefile,v 1.2 2014/03/13 01:56:55 pooka Exp $
#

.PATH:	${.CURDIR}/../../../../kern

LIB=	rumpdev_drvctl
COMMENT=/dev/drvctl driver

IOCONF=	DRVCTL.ioconf

SRCS=	kern_drvctl.c
SRCS+=	drvctl_component.c

.include <bsd.lib.mk>
.include <bsd.klinks.mk>
