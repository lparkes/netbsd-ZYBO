# $NetBSD: Makefile.inc,v 1.1 2013/02/23 14:16:49 jmmv Exp $

.include "../Makefile.inc"

LIBISCXX=	yes
LIBISPRIVATE=	yes

LIBDPLIBS+=     lua	${.CURDIR}/../../../../mit/lua/lib/liblua
LIBDPLIBS+=     m	${.CURDIR}/../../../../../lib/libm
