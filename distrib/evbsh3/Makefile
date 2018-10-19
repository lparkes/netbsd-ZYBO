#	$NetBSD: Makefile,v 1.1 2010/04/06 15:54:31 nonaka Exp $

.include <bsd.own.mk>
.include "${NETBSDSRCDIR}/distrib/common/Makefile.distrib"

.if ${MACHINE_ARCH} == "sh3el"
SUBDIR=		instkernel
.endif
SUBDIR+=	cdroms
TARGETS+=	release

iso_image:
	${MAKEDIRTARGET} cdroms iso_image

.include <bsd.subdir.mk>
