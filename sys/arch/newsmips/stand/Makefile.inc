#	$NetBSD: Makefile.inc,v 1.9 2016/07/21 18:50:21 christos Exp $

BINDIR= /usr/mdec
NOPIE=yes

.include "${S}/conf/newvers_stand.mk"

# XXX SHOULD NOT NEED TO DEFINE THESE!
LIBCRT0=
LIBCRTI=
LIBC=
LIBCRTBEGIN=
LIBCRTEND=
