#	$NetBSD: Makefile.inc,v 1.19 2010/07/11 07:43:12 mrg Exp $

SRCS+=		rtld_start.S mips_reloc.c

COPTS+=		-G0

CPPFLAGS+=	-DELFSIZE=_MIPS_SZPTR
CPPFLAGS+=	-DRTLD_INHIBIT_COPY_RELOCS
AFLAGS+=	-Wa,--fatal-warnings

LDFLAGS+=	-Wl,-e,rtld_start
