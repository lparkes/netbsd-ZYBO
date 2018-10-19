# $NetBSD: Makefile,v 1.3 2011/06/11 18:03:19 christos Exp $
#
.include "Makefile.inc"
.include <bsd.own.mk>

.if ${MACHINE_ARCH} != "m68000"
TESTS_SUBDIRS=		ld.elf_so
.endif

TESTSDIR=	${TESTSBASE}/libexec

.include <bsd.test.mk>
