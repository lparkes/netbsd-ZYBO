# $NetBSD: Makefile,v 1.1 2018/04/29 19:47:35 sevan Exp $

.include <bsd.init.mk>
.if ${MKPIC} != no
LUA_MODULES=netpgp
LUA_SRCS.netpgp=glue.c
LUA_DPLIBS+=netpgp ${.CURDIR}/../../lib/netpgp

EXTDIST=${.CURDIR}/../../dist

.PATH: ${EXTDIST}/bindings/lua
.endif

.include <bsd.lua.mk>
