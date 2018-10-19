#	$NetBSD: Makefile,v 1.1 1996/01/07 22:06:01 leo Exp $

PROG	= file2swp.ttp

OBJS	= file2swp.o
HEADERS	=
LIBS	= -lxhdi

include ../Makefile.inc

${PROG}: ${OBJS} ${LDADD}
	${CC} -DCOMPRESSED_READ ${LDFLAGS} -o $@ ${OBJS} ${LDADD} ${LIBS}
