#	$NetBSD: Makefile,v 1.3 2013/06/26 21:36:39 christos Exp $

NOOBJ=	# defined

.include <bsd.own.mk>

.if ${MKSHARE} != "no"
FILES=		wpa_supplicant.conf
FILESDIR=	/usr/share/examples/wpa_supplicant
.endif

.include <bsd.prog.mk>
