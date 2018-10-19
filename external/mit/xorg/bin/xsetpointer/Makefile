#	$NetBSD: Makefile,v 1.3 2003/09/20 06:20:51 lukem Exp $

.include <bsd.own.mk>

PROG=	xsetpointer

LDADD+=	-lXi -lXext -lX11
DPADD+=	${LIBXI} ${LIBXEXT} ${LIBX11}

.PATH:	${X11SRCDIR.${PROG}}

.include <bsd.x11.mk>
.include <bsd.prog.mk>
