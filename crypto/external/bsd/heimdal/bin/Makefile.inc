# $NetBSD: Makefile.inc,v 1.3 2017/01/28 21:31:43 christos Exp $

BINDIR=/usr/bin

LDADD+= ${LIBKRB5_LDADD}
DPADD+= ${LIBKRB5_DPADD}

LDADD+= -lheimbase ${LIBVERS}
DPADD+= ${LIBHEIMBASE} ${LIBVERS}
