# $NetBSD: GENERIC.MP,v 1.1 2012/05/23 08:19:40 skrll Exp $
#
# Generic hppa kernel with multiprocessor support.

include "arch/hppa/conf/GENERIC"

options 	MULTIPROCESSOR		# include multiprocessor support
