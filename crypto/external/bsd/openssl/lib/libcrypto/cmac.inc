#	$NetBSD: hmac.inc,v 1.1 2009/07/19 23:30:43 christos Exp $
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/cmac/Makefile
#

.PATH:	${OPENSSLSRC}/crypto/cmac


CMAC_SRCS = cmac.c cm_ameth.c cm_pmeth.c
SRCS += ${CMAC_SRCS}

.for cryptosrc in ${CMAC_SRCS}
CPPFLAGS.${cryptosrc} = -I${OPENSSLSRC}/crypto/cmac
.endfor