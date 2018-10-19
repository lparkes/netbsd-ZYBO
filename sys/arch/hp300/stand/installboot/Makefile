#	$NetBSD: Makefile,v 1.5 2001/12/12 01:49:43 tv Exp $

NOMAN=	# defined

beforeinstall:
	${INSTALL_FILE} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/installboot.sh ${DESTDIR}${BINDIR}/installboot

.include <bsd.prog.mk>
