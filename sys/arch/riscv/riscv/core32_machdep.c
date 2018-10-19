/*	$NetBSD: netbsd32_core.c,v 1.14 2011/02/02 20:10:09 chuck Exp $	*/

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: netbsd32_core.c,v 1.14 2011/02/02 20:10:09 chuck Exp $");

#define	CORENAME(x)	__CONCAT(x,32)
#define	COREINC		<compat/netbsd32/netbsd32.h>

#include "core_machdep.c"
