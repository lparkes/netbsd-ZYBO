#	$NetBSD: ec.inc,v 1.6 2018/02/24 21:45:57 christos Exp $
#
#	SRCS extracted from src/crypto/dist/openssl/crypto/siphash
#

SIPHASH=${OPENSSLSRC}/crypto/siphash
.PATH:	${SIPHASH}


SIPHASH_SRCS += \
siphash.c \
siphash_ameth.c \
siphash_pmeth.c

SRCS += ${SIPHASH_SRCS}

.for cryptosrc in ${SIPHASH_SRCS}
CPPFLAGS.${cryptosrc} = -I${SIPHASH} ${SIPHASHCPPFLAGS}
.endfor
