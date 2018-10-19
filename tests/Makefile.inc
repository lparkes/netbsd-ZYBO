# $NetBSD: Makefile.inc,v 1.4 2017/01/14 00:33:19 christos Exp $
WARNS ?= 4
CWARNFLAGS+= -Wno-missing-noreturn
TOOLSSRCDIR:= ${.PARSEDIR}
CPPFLAGS+= -I${TOOLSSRCDIR}
