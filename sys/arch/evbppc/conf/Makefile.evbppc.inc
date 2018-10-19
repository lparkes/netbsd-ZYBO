#	$NetBSD: Makefile.evbppc.inc,v 1.7 2011/06/14 05:31:33 matt Exp $

CPPFLAGS += -D__${BOARDTYPE}__

RAMDISKDIR!=	cd ${NETBSDSRCDIR}/distrib/${THISPPC:T}/ramdisk && ${PRINTOBJDIR}

.-include "${THISPPC}/conf/Makefile.${BOARDTYPE}.inc"
