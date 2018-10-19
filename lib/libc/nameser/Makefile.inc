#	$NetBSD: Makefile.inc,v 1.61 2003/12/07 21:57:22 matt Exp $

# net sources
.PATH: ${.CURDIR}/nameser

SRCS+=	ns_name.c ns_netint.c ns_parse.c ns_print.c \
	ns_samedomain.c ns_ttl.c
