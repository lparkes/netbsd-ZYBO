# $NetBSD$
#
# Public Domain.
#

.PATH:	${.CURDIR}/../../../../external/bsd/libnv/dist

LIB=	rumpkern_nv
COMMENT=Name/value pairs library

SRCS=	nvlist.c
SRCS+=	nvpair.c
SRCS+=	dnvlist.c
SRCS+=	nv_kern_netbsd.c

#RUMPCOMP_INCS_DIR:=	${.PARSEDIR}
#RUMPCOMP_USER_CPPFLAGS=-I${RUMPCOMP_INCS_DIR}

CPPFLAGS+=	-I ${NETBSDSRCDIR}/sys/external/bsd/libnv/dist

.include <bsd.lib.mk>
.include <bsd.klinks.mk>
