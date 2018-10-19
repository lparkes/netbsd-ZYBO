#	$NetBSD: sha.inc,v 1.5 2018/04/06 23:04:46 christos Exp $
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/aria/Makefile
#

.PATH:	${OPENSSLSRC}/crypto/aria


ARIA_SRCS += aria.c

SRCS += ${ARIA_SRCS}

.for cryptosrc in ${ARIA_SRCS}
CPPFLAGS.${cryptosrc} += -I${OPENSSLSRC}/crypto/aria ${ARIACPPFLAGS}
.endfor
