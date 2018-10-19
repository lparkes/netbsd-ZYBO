/* $NetBSD: lock.h,v 1.2 2014/08/13 19:32:35 matt Exp $ */

#ifdef __aarch64__
# include <sys/common_lock.h>
#elif defined(__arm__)
# include <arm/lock.h>
#endif
