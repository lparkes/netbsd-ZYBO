#	$NetBSD: libcincludes.mk,v 1.1 2008/10/26 07:28:06 mrg Exp $

# Makefile fragment shared across several parts that want to look
# inside libc's include tree.

LIBC_MACHINE_ARCH?=	${MACHINE_ARCH}
LIBC_MACHINE_CPU?=	${MACHINE_CPU}

.if defined(LIBC_MACHINE_ARCH) && \
    exists(${NETBSDSRCDIR}/lib/libc/arch/${LIBC_MACHINE_ARCH}/SYS.h)
ARCHSUBDIR=	${LIBC_MACHINE_ARCH}
.elif exists(${NETBSDSRCDIR}/lib/libc/arch/${LIBC_MACHINE_CPU}/SYS.h)
ARCHSUBDIR=	${LIBC_MACHINE_CPU}
.else
.BEGIN:
	@echo no ARCHDIR for ${LIBC_MACHINE_ARCH} nor ${LIBC_MACHINE_CPU}
	@false
.endif

ARCHDIR=	${NETBSDSRCDIR}/lib/libc/arch/${ARCHSUBDIR}
