#include <sys/cdefs.h>
#ifdef __FreeBSD__
__FBSDID("$FreeBSD: head/lib/msun/src/s_llroundl.c 144772 2005-04-08 01:24:08Z das $");
#else
__RCSID("$NetBSD$");
#endif

#define stype		long double
#define	roundit		roundl
#define dtype		long long
#define	DTYPE_MIN	LLONG_MIN
#define	DTYPE_MAX	LLONG_MAX
#define	fn		llroundl

#include "s_lround.c"
