/* $NetBSD$ */

/*
 * Automatically generated by ./genheaders.sh on Wed May 16 14:39:02 CEST 2018
 * Do not modify directly!
 */
#ifndef _USERMODE_WCHAR_LIMITS_H
#define _USERMODE_WCHAR_LIMITS_H

#if defined(__i386__)
#include "../../i386/include/wchar_limits.h"
#elif defined(__x86_64__)
#include "../../amd64/include/wchar_limits.h"
#elif defined(__arm__)
#include "../../arm/include/wchar_limits.h"
#else
#error port me
#endif

#endif