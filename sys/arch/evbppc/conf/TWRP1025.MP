# $NetBSD: TWRP1025.MP,v 1.1 2011/06/29 06:23:36 matt Exp $
#
#	TWRP1025 kernel, plus multiprocessor support.

include	"arch/evbppc/conf/TWRP1025"

options 	MULTIPROCESSOR
# this option may cause trouble under very high interrupt load
#options 	OPENPIC_DISTRIBUTE	# let all CPUs serve interrupts
