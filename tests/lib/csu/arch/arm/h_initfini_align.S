/*	$NetBSD: h_initfini_align.S,v 1.2 2010/12/12 18:21:21 joerg Exp $	*/

#include <machine/asm.h>

RCSID("$NetBSD: h_initfini_align.S,v 1.2 2010/12/12 18:21:21 joerg Exp $")

/*
 * LINTSTUB: bool check_stack_alignment(void);
 */

ARM_ENTRY(check_stack_alignment)
#ifdef __ARM_EABI__
	tst	sp, #7
#else
	tst	sp, #3
#endif
	movne	r0, #0
	moveq	r0, #1
	RET
END(check_stack_alignment)
