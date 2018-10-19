#	$NetBSD: Makefile,v 1.2 2002/05/07 14:08:33 isaki Exp $

.include <bsd.own.mk>
.include "${NETBSDSRCDIR}/distrib/common/Makefile.distrib"

.include <bsd.kernobj.mk>

RAMDISKDIR!=	cd ${.CURDIR}/../ramdisk && ${PRINTOBJDIR}
RAMDISK=	${RAMDISKDIR}/inst.fs

MDSETTARGETS=		INSTALL ${RAMDISK} -
MDSET_RELEASEDIR=	binary/kernel

.include "${DISTRIBDIR}/common/Makefile.mdset"

.include <bsd.prog.mk>
