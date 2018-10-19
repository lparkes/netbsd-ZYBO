#	$NetBSD: Makefile.inc,v 1.2 2014/09/05 18:09:37 matt Exp $

SRCS+=		__sigaction14_sigtramp.c __sigtramp2.S

CPPFLAGS+=	-I.

.if ${MKSOFTFLOAT} != "no"
.include <softfloat/Makefile.inc>
.endif
