# $NetBSD: Makefile,v 1.1 2015/09/24 14:12:47 christos Exp $

.include <bsd.own.mk>

TEST_SUBDIRS=
.if ${MKATF} != "no"
TEST_SUBDIRS+=	tests
.endif

SUBDIR= lib .WAIT ${TEST_SUBDIRS}

.include <bsd.subdir.mk>
