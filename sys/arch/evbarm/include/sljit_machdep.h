/*	$NetBSD: sljit_machdep.h,v 1.1 2014/07/23 18:19:43 alnsn Exp $	*/

#ifdef __aarch64__
#include <aarch64/sljit_machdep.h>
#else
#include <arm/sljit_machdep.h>
#endif
