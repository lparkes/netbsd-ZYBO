/*	$NetBSD: memcpy.c,v 1.1 2005/12/20 19:28:52 christos Exp $	*/

#define MEMCOPY
#include "bcopy.c"

#if defined(__ARM_EABI__)
__strong_alias(__aeabi_memcpy, memcpy)
#endif
