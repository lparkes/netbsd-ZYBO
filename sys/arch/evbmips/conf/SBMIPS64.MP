# $NetBSD$

include "arch/evbmips/conf/SBMIPS64"

options 	MULTIPROCESSOR
options 	LOCKDEBUG

pseudo-device	lockstat

no makeoptions	COPY_SYMTAB
makeoptions	COPY_SYMTAB=1

