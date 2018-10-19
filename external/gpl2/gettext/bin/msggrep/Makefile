#	$NetBSD: Makefile,v 1.2 2005/04/29 15:05:01 christos Exp $

PROG=	msggrep

PROGDPLIBS+= grep ${.CURDIR}/../../lib/libgrep

.include "${.CURDIR}/../Makefile.inc.prog"

CPPFLAGS+=-I${DIST}/gettext-tools/libgrep
