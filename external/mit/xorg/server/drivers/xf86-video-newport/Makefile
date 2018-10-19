#	$NetBSD: Makefile,v 1.2 2009/01/20 10:18:32 martin Exp $

DRIVER=		xf86-video-newport
DRIVER_NAME=	newport_drv

SRCS=		newport_accel.c newport_cmap.c newport_cursor.c \
		newport_driver.c newport_regs.c newport_shadow.c

CPPFLAGS+=	${X11FLAGS.DRI}

MAN=		newport.4

.include "../Makefile.xf86-driver"
