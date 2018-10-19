#	$NetBSD: Makefile,v 1.2 2013/08/11 06:48:46 dholland Exp $

PROG=		infocmp

CPPFLAGS+=	-I${.CURDIR}/../../lib/libterminfo
LDADD+=		-lterminfo -lutil
DPADD+=		${LIBTERMINFO} ${LIBUTIL}

.include <bsd.prog.mk>
