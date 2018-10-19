# $NetBSD: Makefile,v 1.2 2016/08/20 15:24:29 christos Exp $

LIBISPRIVATE=yes
.include <bsd.init.mk>

LIB=xfrd
SRCS=\
remote.c \
xfrd.c \
xfrd-disk.c \
xfrd-notify.c \
xfrd-tcp.c

COPTS.xfrd-tcp.c+=-Wno-stack-protector

.include <bsd.lib.mk>
