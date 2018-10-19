/*	$NetBSD: namespace.h,v 1.2 2002/01/31 19:20:14 tv Exp $	*/

/*
 * Mainly empty header to make reachover bits of libc happy.
 *
 * Since all reachover bits will include this, it's a good place to pull
 * in nbtool_config.h.
 */
#include "nbtool_config.h"

/* No aliases in reachover-based libc sources. */
#undef __indr_reference
#undef __weak_alias
#undef __warn_references
