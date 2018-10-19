#	$NetBSD: Makefile,v 1.2 2010/02/05 16:34:04 roy Exp $
#	from: @(#)Makefile	8.1 (Berkeley) 6/8/93

CLEANFILES= terminfo.cdb
realall: terminfo.cdb
FILES=terminfo.cdb terminfo
FILESDIR=${BINDIR}/misc

terminfo.cdb: terminfo ${TOOL_TIC}
	${_MKTARGET_CREATE}
	${TOOL_TIC} -ax -o ${.TARGET} "${.CURDIR}/terminfo" 

.include <bsd.prog.mk>
