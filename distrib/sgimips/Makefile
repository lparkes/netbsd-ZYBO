#	$NetBSD: Makefile,v 1.1 2002/05/21 20:54:16 rafal Exp $

SUBDIR=		ramdisk .WAIT instkernel .WAIT cdroms
TARGETS+=	release

iso_image:
	${MAKEDIRTARGET} cdroms iso_image

.include <bsd.subdir.mk>
