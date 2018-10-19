#	$NetBSD: Makefile.inc,v 1.15 2014/08/15 09:40:07 matt Exp $

SRCS+=		mdreloc.c
LDFLAGS+=	-Wl,-e,_rtld_start

CPPFLAGS+=	-fPIC

SRCS+=		rtld_start.S
CPPFLAGS+=	-DELFSIZE=32
#LDFLAGS+=	-Wl,--script,${.CURDIR}/arch/powerpc/ld.so.script
