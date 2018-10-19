#	$NetBSD$
#

.PATH:	${.CURDIR}/../../../../net ${.CURDIR}/../../../../netipsec

LIB=	rumpnet_ipsec
COMMENT= ipsec interface

IOCONF=	IPSEC.ioconf
SRCS=	if_ipsec.c ipsecif.c

SRCS+=	ipsec_component.c

.include <bsd.lib.mk>
.include <bsd.klinks.mk>
