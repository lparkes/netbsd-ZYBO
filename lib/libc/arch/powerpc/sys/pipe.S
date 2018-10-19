/*	$NetBSD: pipe.S,v 1.8 2011/01/15 07:31:13 matt Exp $	*/

#include "SYS.h"

#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: pipe.S,v 1.8 2011/01/15 07:31:13 matt Exp $")
#endif /* LIBC_SCCS && !lint */

#ifdef WEAK_ALIAS
WEAK_ALIAS(pipe, _pipe)
#endif

ENTRY(_pipe)
	mr	%r5,%r3		# save pointer
	_DOSYSCALL(pipe)	# assume, that r5 is kept
	bso	1f
	stint	%r3,0(%r5)	# success, store fds
	stint	%r4,4(%r5)
	li	%r3,0
	blr			# and return 0
1:
	BRANCH_TO_CERROR()
END(_pipe)
