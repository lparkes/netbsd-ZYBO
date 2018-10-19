#	$NetBSD: Makefile,v 1.7 2014/07/12 20:31:04 nakayama Exp $

.include <bsd.own.mk>

PROG=	xlsclients

CPPFLAGS+=	-I${DESTDIR}${X11INCDIR} -DHAVE_STRNLEN

#BUILDSYMLINKS=	xlscli.man xlsclients.man

LDADD+=	-lxcb -lxcb-atom
DPADD+=	${LIBXCB} ${LIBXCB_ATOM}

.PATH:	${X11SRCDIR.${PROG}} ${X11SRCDIR.${PROG}}/man

.include "../../xorg-pkg-ver.mk"

.include <bsd.x11.mk>
.include <bsd.prog.mk>
