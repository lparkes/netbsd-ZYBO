#	$NetBSD: Makefile,v 1.2 2018/03/04 00:24:21 christos Exp $

.include "bsd.own.mk"

CRYPTODIST=${NETBSDSRCDIR}/crypto
.include "${NETBSDSRCDIR}/crypto/Makefile.openssl"

regen:
	for i in $$(find ${OPENSSLSRC} -name \*alpha\*.pl); do \
		case $$i in \
		(*) perl -I${OPENSSLSRC}/crypto/perlasm \
		-I${OPENSSLSRC}/crypto/bn/asm $$i linux /dev/stdout \
		> $$(basename $$i .pl).S;; \
		esac; \
	done
