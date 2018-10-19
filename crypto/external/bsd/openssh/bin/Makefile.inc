#	$NetBSD: Makefile.inc,v 1.2 2009/12/19 18:00:26 christos Exp $

CPPFLAGS+=-DWITH_OPENSSL
LDADD+=	-lssh -lcrypto -lcrypt -lz
DPADD+=	${LIBSSH} ${LIBCRYPTO} ${LIBCRYPT} ${LIBZ}

.include "${.PARSEDIR}/../Makefile.inc"
