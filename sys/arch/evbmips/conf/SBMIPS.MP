# $NetBSD$

include "arch/evbmips/conf/SBMIPS"

options 	MULTIPROCESSOR
options 	LOCKDEBUG

pseudo-device	lockstat

no makeoptions	COPY_SYMTAB
makeoptions	COPY_SYMTAB=1

