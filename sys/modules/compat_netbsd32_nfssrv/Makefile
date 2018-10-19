#	$NetBSD: Makefile,v 1.15 2015/08/31 09:34:07 christos Exp $

.include "../Makefile.inc"
.include "../Makefile.assym"

KMOD=	compat_netbsd32_nfssrv

CPPFLAGS+=	-DCOMPAT_NETBSD32
CPPFLAGS+=	-DNFSSERVER

.PATH:	${S}/compat/netbsd32
SRCS+=	netbsd32_nfssvc.c

.include <bsd.kmodule.mk>
