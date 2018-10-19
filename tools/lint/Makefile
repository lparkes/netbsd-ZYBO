#	$NetBSD: Makefile,v 1.3 2001/10/25 02:23:21 thorpej Exp $

HOSTPROGNAME=	${MACHINE_GNU_PLATFORM}-lint
HOST_SRCDIR=	usr.bin/xlint/xlint
HOST_CPPFLAGS=	-DPATH_LIBEXEC=\"${TOOLDIR}/libexec\" \
		-DTARGET_PREFIX=\"${MACHINE_GNU_PLATFORM}-\"

.include "${.CURDIR}/../Makefile.host"
