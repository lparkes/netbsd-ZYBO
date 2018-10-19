# $NetBSD: Makefile.inc,v 1.4 2017/01/29 22:09:06 christos Exp $

BINDIR=/usr/sbin

LDADD+= ${LIBKRB5_LDADD}
DPADD+= ${LIBKRB5_DPADD}

LDADD+= -lheimbase ${LIBVERS}
DPADD+= ${LIBHEIMBASE} ${LIBVERS}
