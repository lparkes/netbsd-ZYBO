/* $NetBSD: vmparam.h,v 1.2 2009/12/14 00:46:12 matt Exp $ */

#ifndef _SBMIPS_VMPARAM_H_
#define _SBMIPS_VMPARAM_H_
#include <mips/vmparam.h>

/* XXXcgd */
#define	VM_PHYSSEG_MAX		8

#undef VM_FREELIST_MAX
#define VM_FREELIST_MAX		3
#if defined(_MIPS_PADDR_T_64BIT) || defined(_LP64)
#define VM_FREELIST_FIRST4G	2
#endif
#if !defined(_LP64)
#define VM_FREELIST_FIRST512M	1
#endif

#endif /* _SBMIPS_VMPARAM_H_ */
