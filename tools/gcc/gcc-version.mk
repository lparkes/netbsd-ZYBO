#	$NetBSD: gcc-version.mk,v 1.10 2018/03/28 19:30:41 mrg Exp $

# common location for tools and native build

.if ${HAVE_GCC} == 6
NETBSD_GCC_VERSION=nb3 20180905
.elif ${HAVE_GCC} == 7
NETBSD_GCC_VERSION=nb1 20180905
.endif
