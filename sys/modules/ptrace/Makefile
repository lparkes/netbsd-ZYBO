#	$NetBSD: Makefile,v 1.1 2009/07/19 02:50:44 rmind Exp $
#
.include "../Makefile.inc"

.PATH:	${S}/kern

CPPFLAGS+=	-DPTRACE

KMOD=	ptrace
SRCS=	sys_ptrace.c

.include <bsd.kmodule.mk>
