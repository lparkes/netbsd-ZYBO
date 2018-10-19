#	$NetBSD: Makefile,v 1.4 2010/08/06 15:04:13 pooka Exp $

.include <bsd.own.mk>

PROG=	mount_sysctlfs
SRCS=	sysctlfs.c

DPAPP+=	${LIBPUFFS} ${LIBUTIL}
LDADD+=	-lpuffs -lutil

MAN=	mount_sysctlfs.8

.if (${MKRUMP} != "no")
.ifdef RUMP_ACTION
CPPFLAGS+=	-DRUMP_ACTION
LDADD+=		-lrump -lrumpuser -lpthread
.endif
.endif

.include <bsd.prog.mk>
