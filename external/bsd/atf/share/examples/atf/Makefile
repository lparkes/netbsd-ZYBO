# $NetBSD: Makefile,v 1.4 2014/02/08 19:15:34 jmmv Exp $

.include <bsd.init.mk>

.if ${MKSHARE} != "no"
.PATH:		${SRCDIR}/tools
.PATH:		${SRCDIR}/tools/sample

FILESDIR=	/usr/share/examples/atf
FILESMODE=	444
FILES=		atf-run.hooks \
		tests-results.css
.endif

.include <bsd.prog.mk>
