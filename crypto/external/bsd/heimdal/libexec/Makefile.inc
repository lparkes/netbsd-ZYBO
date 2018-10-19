# $NetBSD: Makefile.inc,v 1.5 2017/01/29 22:09:06 christos Exp $

BINDIR=/usr/libexec

LDADD+= ${LIBKRB5_LDADD}
DPADD+= ${LIBKRB5_DPADD}

LDADD+= -lheimntlm ${LIBVERS}
DPADD+= ${LIBHEIMNTLM} ${LIBVERS}
