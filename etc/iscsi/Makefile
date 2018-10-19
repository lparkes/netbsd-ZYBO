#	$NetBSD: Makefile,v 1.2 2006/02/11 09:33:16 agc Exp $

.include <bsd.own.mk>

.if ${MKISCSI} != "no"

CONFIGFILES=    	auths targets
FILESDIR=       	/etc/iscsi
FILESMODE_auths=	0600

.endif

.include <bsd.files.mk>
.include <bsd.prog.mk>
