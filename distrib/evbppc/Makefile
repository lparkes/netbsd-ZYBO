#	$NetBSD: Makefile,v 1.1 2002/12/09 14:20:53 scw Exp $

SUBDIR=		ramdisk .WAIT md-kernel cdroms
TARGETS+=	release

iso_image:
	${MAKEDIRTARGET} cdroms iso_image

.include <bsd.subdir.mk>
