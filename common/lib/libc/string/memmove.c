/*	$NetBSD: memmove.c,v 1.1 2005/12/20 19:28:52 christos Exp $	*/

#define MEMMOVE
#include "bcopy.c"

#if defined(__ARM_EABI__)
__strong_alias(__aeabi_memmove, memmove)
__strong_alias(__aeabi_memmove4, memmove)
__strong_alias(__aeabi_memmove8, memmove)
#endif
