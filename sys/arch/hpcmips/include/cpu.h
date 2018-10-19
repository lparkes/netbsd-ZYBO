/*	$NetBSD: cpu.h,v 1.13 2010/01/21 01:23:15 pooka Exp $	*/

#include <mips/cpu.h>
#ifndef _LOCORE
int cpuname_printf(const char *, ...) __printflike(1, 2);
#endif
