# $NetBSD: Makefile.inc,v 1.1 2009/09/29 23:56:34 tsarna Exp $

.include <bsd.own.mk>

.include "${.PARSEDIR}/../Makefile.inc"

CPPFLAGS+=      -DMDNSD_NOROOT -DMDNSD_USER=\"_mdnsd\"

BINDIR?=	/usr/sbin
