#	$NetBSD: Makefile.inc,v 1.30 2011/01/17 08:23:57 matt Exp $

SRCS+=	bswap16.c bswap32.c
SRCS+=	htonl.c htons.c ntohl.c ntohs.c
SRCS+=	syncicache.c

SRCS+=	ffs.S memset.S strlen.S
SRCS+=	gprsavrest.S

# Disable the asm versions on evbppc because they break the Explora
.if ${MACHINE} == "evbppc"
memcpy.o: memcpy.c
memcmp.o: memcmp.c
memmove.o: memmove.c
.endif