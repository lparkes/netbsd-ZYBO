#	$NetBSD: srp.inc,v 1.1 2009/07/19 23:30:43 christos Exp $
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/srp/Makefile
#

.PATH:	${OPENSSLSRC}/crypto/srp


SRP_SRCS = srp_lib.c srp_vfy.c
SRCS += ${SRP_SRCS}

.for cryptosrc in ${SRP_SRCS}
CPPFLAGS.${cryptosrc} = -I${OPENSSLSRC}/crypto/srp
.endfor
