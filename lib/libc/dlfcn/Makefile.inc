#       $NetBSD: Makefile.inc,v 1.2 2002/08/19 09:41:28 lukem Exp $

.PATH: ${.CURDIR}/dlfcn

CPPFLAGS+=	-I${NETBSDSRCDIR}/libexec/ld.elf_so
CPPFLAGS+=	-I${.CURDIR}/dlfcn
SRCS+=		dlfcn_elf.c
