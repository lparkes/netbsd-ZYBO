#	$NetBSD: bsd.i386.mk,v 1.6 2015/06/24 22:20:24 matt Exp $

LD+=			-m elf_i386
MLIBDIR=		i386
LIBGCC_MACHINE_ARCH=	${MLIBDIR}
LIBC_MACHINE_ARCH=	${MLIBDIR}
COMMON_MACHINE_ARCH=	${MLIBDIR}
KVM_MACHINE_ARCH=	${MLIBDIR}
PTHREAD_MACHINE_ARCH=	${MLIBDIR}
BFD_MACHINE_ARCH=	${MLIBDIR}
CSU_MACHINE_ARCH=	${MLIBDIR}
CRYPTO_MACHINE_CPU=	${MLIBDIR}
LDELFSO_MACHINE_CPU=	${MLIBDIR}
GOMP_MACHINE_ARCH=	${MLIBDIR}
XORG_MACHINE_ARCH=	${MLIBDIR}

.include "${.PARSEDIR}/../../m32.mk"