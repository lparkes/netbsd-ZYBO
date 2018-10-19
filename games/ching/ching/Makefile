#	$NetBSD: Makefile,v 1.1 2005/06/30 13:30:33 perry Exp $

SCRIPTS=ching.sh
MAN=	ching.6

.include <bsd.own.mk>

.if ${MKSHARE} != "no"
FILES=	hexagrams macros
FILESDIR=/usr/share/games/ching
.endif

.include <bsd.prog.mk>
