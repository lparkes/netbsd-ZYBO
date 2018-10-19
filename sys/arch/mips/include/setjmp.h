/*	$NetBSD: setjmp.h,v 1.8 2009/08/12 05:12:58 matt Exp $	*/

/*
 * mips/setjmp.h: machine dependent setjmp-related information.
 *
 * For the size of this, refer to <machine/signal.h> as this uses the
 * struct sigcontext to restore it.
 */

#define _JBLEN 87		/* XXX Naively 84; 87 for compatibility */
#ifdef __mips_n32
#define	_BSD_JBSLOT_T_		long long
#endif
