#	$NetBSD: Makefile,v 1.4 2014/01/22 15:23:06 christos Exp $

.include <bsd.own.mk>

PROG=	appres

LDADD+=	-lXt -lSM -lICE -lXext -lX11 -lxcb -lXdmcp -lXau
DPADD+=	${LIBXT} ${LIBSM} ${LIBICE} ${LIBXEXT} ${LIBX11} ${LIBXCB} ${LIBXDMCP} ${LIBXAU}

.PATH:	${X11SRCDIR.${PROG}}
.PATH:	${X11SRCDIR.${PROG}}/man

.include "../../xorg-pkg-ver.mk"

.include <bsd.x11.mk>
.include <bsd.prog.mk>
