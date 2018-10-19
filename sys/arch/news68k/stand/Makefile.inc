#	$NetBSD: Makefile.inc,v 1.10 2014/01/12 15:26:30 tsutsui Exp $

BINDIR= /usr/mdec

CFLAGS+= -ffreestanding

.include "${S}/conf/newvers_stand.mk"

# XXX SHOULD NOT NEED TO DEFINE THESE!
LIBCRT0=
LIBCRTI=
LIBC=
LIBCRTBEGIN=
LIBCRTEND=
