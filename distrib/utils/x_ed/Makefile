# $NetBSD: Makefile,v 1.1 2000/08/09 13:35:23 leo Exp $
# Build an ed without crypt support

SRCDIR=		${.CURDIR}/../../../bin/ed

PROG=		ed
NOMAN=		# defined

SRCS=		buf.c cbc.c glbl.c io.c main.c re.c sub.c undo.c
CPPFLAGS+=	-DBACKWARDS

.include <bsd.prog.mk>

.PATH:		${SRCDIR}
