#	$NetBSD: Makefile,v 1.7 2014/01/10 15:00:16 martin Exp $

NOMAN=	#defined

.include <bsd.own.mk>	# ACTIVE_CC

PROG=	ras1

regress:
	@if ./${PROG} ; then		\
		echo "PASSED";		\
	else				\
		echo "FAILED";		\
	fi

CFLAGS+=	${${ACTIVE_CC} == "gcc":? -fno-reorder-blocks :}

.include <bsd.prog.mk>

