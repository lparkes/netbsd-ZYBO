# $NetBSD: GENERIC.MP,v 1.2 1999/02/22 19:14:46 thorpej Exp $
#
# Generic VAX kernel with multiprocessor support.

include "arch/vax/conf/GENERIC"

options 	MULTIPROCESSOR		# include multiprocessor support
