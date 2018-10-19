#	$NetBSD: Makefile.playstation2.inc,v 1.9 2015/04/06 10:49:13 martin Exp $

# Playstation2 uses 128 bit access, which currently requires n32 ABI
CFLAGS+= -mabi=n32 -march=r5900 -fno-pic -msoft-float
AFLAGS+= -mabi=n32 -march=r5900 -fno-pic -msoft-float
