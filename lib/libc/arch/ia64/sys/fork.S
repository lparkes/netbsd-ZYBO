/* $NetBSD: fork.S,v 1.1 2006/09/10 21:22:34 cherry Exp $ */
	
#include "SYS.h"

ENTRY(__fork, 0)
	CALLSYS_ERROR(fork)
	/* XXX:	 get return value for child */
	RET
END(__fork)