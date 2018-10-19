#	$NetBSD: Makefile,v 1.3 2009/04/13 00:12:16 lukem Exp $

PROG=	pkill

LDADD+=	-lkvm
DPADD+=	${LIBKVM}

LINKS+=	${BINDIR}/pkill ${BINDIR}/pgrep
LINKS+=	${BINDIR}/pkill ${BINDIR}/prenice
MLINKS+=pkill.1 pgrep.1
MLINKS+=pkill.1 prenice.1

.include <bsd.prog.mk>
