# $NetBSD: Makefile,v 1.3 2010/10/20 09:20:12 jmmv Exp $

.include <bsd.init.mk>

SUBDIR=		atf-sh
.if !(${MKKYUA} != "no")
SUBDIR+=	atf-config atf-report atf-run atf-version
.endif

.include <bsd.subdir.mk>
