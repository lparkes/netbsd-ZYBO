# $NetBSD: Makefile,v 1.2 2017/04/01 19:02:58 roy Exp $
#

.include <bsd.own.mk>

.include "../../Makefile.inc"

.PATH:			${DIST}/hooks

FILES=			01-test 02-dump 20-resolv.conf 30-hostname
FILES+=			50-ntp.conf

FILESDIR=		/libexec/dhcpcd-hooks

.include <bsd.prog.mk>
