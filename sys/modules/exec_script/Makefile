#	$NetBSD: Makefile,v 1.1 2008/11/13 10:03:22 ad Exp $

.include "../Makefile.inc"

KMOD=	exec_script

CPPFLAGS+=	-DEXEC_SCRIPT

.PATH:	${S}/kern
SRCS=	exec_script.c

.include <bsd.kmodule.mk>
