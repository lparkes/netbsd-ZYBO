#	$NetBSD: Makefile.inc,v 1.5 2012/08/10 12:20:11 joerg Exp $
#

.include <bsd.own.mk>

SMBDIST=${NETBSDSRCDIR}/external/bsd/smbfs/dist

CPPFLAGS+= -I${SMBDIST}/include
