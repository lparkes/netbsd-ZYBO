#	$NetBSD: Makefile.inc,v 1.6 2013/09/29 14:20:37 christos Exp $

.include "${.PARSEDIR}/../Makefile.inc"
BINDIR?=	/usr/sbin
WARNS?=		1

CPPFLAGS+=-DPACKAGE -DPACKAGE_VERSION
LDADD+=-lz
.ifndef HOSTPROG
BINUTILS_MACHINE_ARCH=${MACHINE_ARCH:C/armv[4-7]/arm/}
DPADD+=${LIBZ}
.endif
