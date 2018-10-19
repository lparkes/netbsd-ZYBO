# $NetBSD: Makefile.inc,v 1.10 2000/09/27 08:28:34 aymeric Exp $

BINDIR=/usr/share/keymaps/amiga
NOMAN=	# defined
CLEANFILES=${FILES}

realall: ${HOSTPROG} ${FILES}

${FILES}: ${HOSTPROG}
	./${HOSTPROG} > $@
