#	$NetBSD: Makefile.inc,v 1.7 2011/05/26 12:56:28 joerg Exp $

.include <bsd.own.mk>

DIST=		${NETBSDSRCDIR}/external/gpl2/gettext/dist

CPPFLAGS+=	-DHAVE_CONFIG_H -I${.CURDIR} -I${.CURDIR}/../../include \
		-I${DIST}/gettext-tools/gnulib-lib \
		-DLOCALEDIR=\"/usr/share/locale\" \
		-DBISON_LOCALEDIR=\"\" \
		-DPKGDATADIR=\"\"

BINDIR?=	/usr/bin

CWARNFLAGS.clang+=	-Wno-format-security
