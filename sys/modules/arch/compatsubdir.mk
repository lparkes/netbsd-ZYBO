#	$NetBSD: compatsubdir.mk,v 1.7 2011/01/31 10:58:14 matt Exp $

# Build netbsd kernel modules.

.include <bsd.own.mk>

.if ${MKCOMPATMODULES} != "no"
.if !make(includes)

# make sure we get an objdir built early enough
.include <bsd.prog.mk>

MAKEDIRTARGETENV=
.if defined(MAKEOBJDIRPREFIX)
MAKEDIRTARGETENV+=	unset MAKEOBJDIRPREFIX &&
.endif
MAKEDIRTARGETENV+=	MAKEOBJDIR='$${.CURDIR:C,^${NETBSDSRCDIR},${.OBJDIR},}'
MAKEDIRTARGETENV+=	MKOBJDIRS=yes MKSHARE=no
MAKEDIRTARGETENV+=	BSD_MK_COMPAT_FILE=${BSD_MK_COMPAT_FILE} MKCOMPATMODULES=no

.if defined(BOOTSTRAP_SUBDIRS)
SUBDIR=	${BOOTSTRAP_SUBDIRS}
.else
SUBDIR= ../../../../modules
.endif

.include <bsd.subdir.mk>

.endif
.endif
