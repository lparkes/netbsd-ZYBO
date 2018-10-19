#	$NetBSD$

LUA_MODULES=		bozohttpd
LUA_SRCS.bozohttpd=	glue.c
LUA_DPLIBS+=		bozohttpd \
			${.CURDIR}/../../../libexec/httpd/libbozohttpd

EXTDIST= 		${.CURDIR}/../../../libexec/httpd

CPPFLAGS+= 		-I${EXTDIST}

.PATH: ${EXTDIST}/lua

.include <bsd.lua.mk>
