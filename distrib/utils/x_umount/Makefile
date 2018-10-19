# $NetBSD: Makefile,v 1.3 2001/10/05 01:17:32 jmc Exp $
#
# Build umount(8) without network support
#

SRCDIR=		${.CURDIR}/../../../sbin/umount

PROG=		umount
NOMAN=		# defined

CPPFLAGS+=	-DSMALL
WARNS?=		1

.include <bsd.prog.mk>

.PATH:		${SRCDIR}
