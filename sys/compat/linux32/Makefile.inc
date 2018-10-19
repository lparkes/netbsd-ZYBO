#	$NetBSD: Makefile.inc,v 1.3 2014/01/14 18:51:25 christos Exp $

.if !defined(SUBDIR)
SYSCALL_PREFIX=linux32

.include <bsd.syscall.mk>
.endif
