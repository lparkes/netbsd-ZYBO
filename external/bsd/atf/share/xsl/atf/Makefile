# $NetBSD: Makefile,v 1.4 2014/02/08 19:15:34 jmmv Exp $

.include <bsd.init.mk>

.if ${MKSHARE} != "no"
.PATH:		${SRCDIR}/tools

FILESDIR=	/usr/share/xsl/atf
FILESMODE=	444
FILES=		tests-results.xsl
.endif

.include <bsd.prog.mk>
