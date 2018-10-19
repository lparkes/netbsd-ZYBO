#	$NetBSD: Makefile,v 1.3 2002/06/02 17:40:45 pooka Exp $
#
#	@(#)Makefile	8.1 (Berkeley) 4/20/94

DIR=	papers/nqnfs
SRCS=	nqnfs.me
MACROS=	-me

paper.ps: ${SRCS}
	${TOOL_PIC} ${SRCS} | ${TOOL_TBL} | \
	    ${TOOL_ROFF_PS} ${MACROS} > ${.TARGET}

.include <bsd.doc.mk>
