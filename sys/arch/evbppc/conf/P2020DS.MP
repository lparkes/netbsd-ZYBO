# $NetBSD: GENERIC.MP,v 1.4 2010/07/31 12:24:50 macallan Exp $
#
#	P2020DS kernel, plus multiprocessor support.

include	"arch/evbppc/conf/P2020DS"

options 	MULTIPROCESSOR
# this option may cause trouble under very high interrupt load
#options 	OPENPIC_DISTRIBUTE	# let all CPUs serve interrupts
