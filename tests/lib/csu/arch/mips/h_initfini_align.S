/*	$NetBSD: h_initfini_align.S,v 1.2 2010/12/12 18:21:21 joerg Exp $	*/

#include <machine/asm.h>

RCSID("$NetBSD: h_initfini_align.S,v 1.2 2010/12/12 18:21:21 joerg Exp $")

/*
 * LINTSTUB: bool check_stack_alignment(void);
 */

LEAF_NOPROFILE(check_stack_alignment)
#ifdef __mips_o32
	andi	v1,sp,3
#else
	andi	v1,sp,7
#endif
	sltiu	v0,v1,1
	jr	ra
END(check_stack_alignment)
