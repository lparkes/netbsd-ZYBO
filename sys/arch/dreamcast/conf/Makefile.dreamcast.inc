#	$NetBSD: Makefile.dreamcast.inc,v 1.10 2010/07/06 05:59:59 mrg Exp $

MACHINE_ARCH=sh3el

TEXTADDR?=8c010000
LINKFORMAT=	-N

SYSTEM_LD_TAIL_EXTRA+=;							\
	echo ${OBJCOPY} -O binary $@ $@.bin;				\
	${OBJCOPY} -O binary $@ $@.bin;					\
	chmod 755 $@.bin
