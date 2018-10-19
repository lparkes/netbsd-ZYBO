#include <sys/cdefs.h>
#ifdef __FreeBSD__
__FBSDID("$FreeBSD: head/lib/msun/src/s_llround.c 144771 2005-04-08 00:52:27Z das $");
#else
__RCSID("$NetBSD$");
#endif

#define stype		double
#define	roundit		round
#define dtype		long long
#define	DTYPE_MIN	LLONG_MIN
#define	DTYPE_MAX	LLONG_MAX
#define	fn		llround

#include "s_lround.c"
