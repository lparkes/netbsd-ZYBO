#	$NetBSD: Makefile.inc,v 1.3 2016/02/21 14:50:05 christos Exp $

NOSSP=yes
NOPIE=yes
NOCTF=yes
BINDIR=		/usr/mdec

.include <bsd.init.mk>

COPTS+=		-Wno-pointer-sign
COPTS+=		-fno-strict-aliasing
COPTS+=		-fno-unwind-tables
