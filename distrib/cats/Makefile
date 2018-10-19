# $NetBSD: Makefile,v 1.2 2002/04/11 22:54:01 lukem Exp $

SUBDIR=		ramdisk .WAIT instkernel .WAIT cdroms
TARGETS+=	release

iso_image:
	${MAKEDIRTARGET} cdroms iso_image

.include <bsd.subdir.mk>
