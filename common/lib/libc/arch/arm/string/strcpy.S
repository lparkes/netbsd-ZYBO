/* $NetBSD: strcpy.S,v 1.4 2013/01/10 02:13:49 matt Exp $ */

#if defined(_STANDALONE)
#ifdef __thumb__
#include "strcpy_thumb.S"
#else
#include "strcpy_naive.S"
#endif
#else
#include "strcpy_arm.S"
#endif
