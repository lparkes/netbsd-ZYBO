# $NetBSD: Makefile,v 1.2 2009/02/02 20:47:21 joerg Exp $
# Original from FreeBSD, no rcs id

PROG= pkg_info
SRCS= main.c perform.c show.c

.include <bsd.init.mk>

.PATH:	${DIST}/info

CWARNFLAGS.clang+=	-Wno-format-security

.include <bsd.prog.mk>
