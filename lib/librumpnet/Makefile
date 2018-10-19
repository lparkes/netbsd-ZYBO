#	$NetBSD: Makefile,v 1.1 2008/10/16 09:44:12 pooka Exp $
#

RUMPTOP=	${.CURDIR}/../../sys/rump

LIBDPLIBS+=     rump	${.CURDIR}/../librump

WARNS=		3	# XXX: kernel isn't ready for -Wsign-compare

.include "${RUMPTOP}/librump/rumpnet/Makefile.rumpnet"
