#	$NetBSD: kdf.inc,v 1.1 2009/07/19 23:30:43 christos Exp $
#
#	@(#) Copyright (c) 1995 Simon J. Gkdfaty
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/kdf/Makefile
#

.PATH:	${OPENSSLSRC}/crypto/kdf


KDF_SRCS = \
hkdf.c \
kdf_err.c \
tls1_prf.c

SRCS += ${KDF_SRCS}

.for cryptosrc in ${KDF_SRCS}
CPPFLAGS.${cryptosrc} = -I${OPENSSLSRC}/crypto/kdf
.endfor
