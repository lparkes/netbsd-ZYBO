#	$NetBSD: bsd.arm-lpae.mk,v 1.3 2014/08/10 17:46:54 joerg Exp $

.ifndef _BSD_ARM_LPAE_MK_
_BSD_ARM_LPAE_MK_=1

KMODULEARCHDIR:=	arm-lpae

# gcc emits bad code with these options
CPPFLAGS+=	-DARM_HAS_LPAE

.endif # _BSD_ARM_LPAE_MK_
