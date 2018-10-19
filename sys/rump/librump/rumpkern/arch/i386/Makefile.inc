#	$NetBSD: Makefile.inc,v 1.6 2010/06/16 11:45:21 pooka Exp $
#

.include "${RUMPTOP}/librump/rumpkern/arch/x86/Makefile.inc"

.PATH:	${RUMPTOP}/../arch/i386/i386
SRCS+=	kobj_machdep.c
