/*	$NetBSD: h_initfini_align.S,v 1.2 2010/12/12 18:21:21 joerg Exp $	*/

#include <machine/asm.h>

RCSID("$NetBSD: h_initfini_align.S,v 1.2 2010/12/12 18:21:21 joerg Exp $")

/*
 * LINTSTUB: bool check_stack_alignment(void);
 */

LEAF_NOPROFILE(check_stack_alignment, 0)
	ldiq	v0, 0
	and	sp, 7, t0
	cmoveq	t0, 1, v0
	ret
END(check_stack_alignment)
