/* $NetBSD: strnlen.S,v 1.2 2013/08/19 01:08:29 matt Exp $ */

#include <arm/cdefs.h>		/* for _ARM_ARCH_T2 */

#define	STRNLEN

#if defined(_STANDALONE) || (defined(__thumb__) && !defined(_ARM_ARCH_T2))
#include "strlen_naive.S"
#else
#include "strlen_arm.S"
#endif
