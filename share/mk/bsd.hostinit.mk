# $NetBSD: Makefile.inc,v 1.15 2018/05/01 12:38:39 christos Exp $

.if !defined(_BSD_HOSTINIT_MK_)
_BSD_HOSTINIT_MK_=1

NOINFO=		# defined
NOLINT=		# defined
NOMAN=		# defined
MKREPRO=no	# Native toolchain might be unable to do it

.include <bsd.init.mk>

.endif  # !defined(_BSD_HOSTINIT_MK_)
