#	$NetBSD: Makefile.inc,v 1.6 2014/01/14 18:51:25 christos Exp $

.if !defined(SUBDIR)
SYSCALL_PREFIX=linux

.include <bsd.syscall.mk>
.endif
