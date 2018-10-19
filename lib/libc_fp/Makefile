#	$NetBSD: Makefile,v 1.4 2015/07/08 01:08:24 matt Exp $
#

USE_SHLIBDIR=	yes

.include <bsd.own.mk>

LIBC_MACHINE_CPU?= ${MACHINE_CPU}

.if exists(arch/${LIBC_MACHINE_CPU})
.include "arch/${LIBC_MACHINE_CPU}/Makefile.inc"
.PATH: ${.CURDIR}/arch/${LIBC_MACHINE_CPU}
.elif exists(arch/${MACHINE_ARCH})
.include "arch/${MACHINE_ARCH}/Makefile.inc"
.PATH: ${.CURDIR}/arch/${MACHINE_ARCH}
.elif exists(arch/${MACHINE}
.include "arch/${MACHINE}/Makefile.inc"
.PATH: ${.CURDIR}/arch/${MACHINE}
.endif

.if !empty(SRCS)

LIB?=		c_fp

.include <bsd.lib.mk>
.endif
