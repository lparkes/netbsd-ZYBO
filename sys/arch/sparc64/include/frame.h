/*       $NetBSD: frame.h,v 1.14 2005/12/11 12:19:10 christos Exp $        */

#include <sparc/frame.h>

#ifndef _LOCORE
void *getframe(struct lwp *, int, int *);
#endif
