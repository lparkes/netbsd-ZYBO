#	$NetBSD: sha.inc,v 1.5 2018/04/06 24:04:46 christos Exp $
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/sm4/Makefile
#

.PATH:	${OPENSSLSRC}/crypto/sm4

SM4_SRCS += sm4.c 

SRCS += ${SM4_SRCS}

.for cryptosrc in ${SM4_SRCS}
CPPFLAGS.${cryptosrc} += -I${OPENSSLSRC}/crypto/sha ${SM4CPPFLAGS}
.endfor
