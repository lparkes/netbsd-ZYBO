/*	$NetBSD: param.h,v 1.12 2011/06/20 06:29:53 matt Exp $	*/

#if defined(_KERNEL) && !defined(_MODULE)

#define MACHINE			"ofppc"

#endif /* _KERNEL && !_MODULE */

/* at this offset we mmap() the PCI IO range in display drivers */
#define PCI_MAGIC_IO_RANGE      0xfeff0000

#include <powerpc/param.h>
