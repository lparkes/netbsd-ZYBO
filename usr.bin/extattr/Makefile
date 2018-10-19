#	$NetBSD: Makefile,v 1.1 2005/01/02 17:55:48 thorpej Exp $

PROG=	getextattr

LINKS+=	${BINDIR}/getextattr ${BINDIR}/setextattr
LINKS+=	${BINDIR}/getextattr ${BINDIR}/rmextattr
LINKS+=	${BINDIR}/getextattr ${BINDIR}/lsextattr

MLINKS+= getextattr.1 setextattr.1
MLINKS+= getextattr.1 rmextattr.1
MLINKS+= getextattr.1 lsextattr.1

.include <bsd.prog.mk>
