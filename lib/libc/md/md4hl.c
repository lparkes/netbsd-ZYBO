/*	$NetBSD: md4hl.c,v 1.6 2005/06/12 05:34:34 lukem Exp $	*/

/*
 * Written by Jason R. Thorpe <thorpej@NetBSD.org>, April 29, 1997.
 * Public domain.
 */

#include <sys/cdefs.h>
#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: md4hl.c,v 1.6 2005/06/12 05:34:34 lukem Exp $");
#endif /* LIBC_SCCS and not lint */

#define	MDALGORITHM	MD4
#define MDINCLUDE	<md4.h>

#include "mdXhl.c"
