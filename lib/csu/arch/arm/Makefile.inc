# $NetBSD: Makefile.inc,v 1.6 2013/06/27 21:24:39 matt Exp $

CPPFLAGS+=	-I${ARCHDIR}
.if (!empty(CPUFLAGS) && ${CPUFLAGS:M-mabi=aapcs*} != "")
CPPFLAGS+=      -DHAVE_INITFINI_ARRAY
.endif
CPPFLAGS+=	-DELF_NOTE_MARCH_DESC=\"${CSU_MACHINE_ARCH}\"
