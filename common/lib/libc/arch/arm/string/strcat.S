/* $NetBSD: strcat.S,v 1.4 2013/01/10 02:13:49 matt Exp $ */

#if defined(_STANDALONE)
#include "strcat_naive.S"
#else
#include "strcat_arm.S"
#endif
