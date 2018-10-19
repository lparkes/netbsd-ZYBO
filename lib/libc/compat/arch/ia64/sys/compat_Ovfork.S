/* $NetBSD: __vfork14.S,v 1.2 2006/09/22 17:59:47 cherry Exp $ */

#include "SYS.h"

/* XXX should not be necessary or useful, no NetBSD/ia64 1.4 */
SYSCALL(vfork)
	/* XXX: watchout for return values for child/parent */ 
	RET
END(vfork)	
