/* $NetBSD: __vfork14.S,v 1.1 2006/09/10 21:22:34 cherry Exp $ */

#include "SYS.h"

SYSCALL(__vfork14)
	/* XXX: watchout for return values for child/parent */ 
	RET
END(__vfork14)	
