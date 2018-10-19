#	$NetBSD: Makefile,v 1.2 2017/06/08 17:24:31 skrll Exp $

LIBISPRIVATE=	yes

.include <bsd.own.mk>

LIB=	fdt

.include "${.CURDIR}/../../Makefile.inc"
.include "${LIBFDTDIST}/Makefile.libfdt"

SRCS=	${LIBFDT_SRCS}

CPPFLAGS+=	-I ${LIBFDTDIST}

.PATH:	${LIBFDTDIST}

.include <bsd.lib.mk>

