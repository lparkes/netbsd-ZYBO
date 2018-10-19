#	$NetBSD: Makefile,v 1.1 1995/12/18 16:54:12 waldi Exp waldi $

PROG	= chg_pid.ttp

OBJS	= chg_pid.o
HEADERS	=

include ../Makefile.inc

${PROG}: ${OBJS} ${LDADD}
	${CC} ${LDFLAGS} -o $@ ${OBJS} ${LDADD} ${LIBS}
