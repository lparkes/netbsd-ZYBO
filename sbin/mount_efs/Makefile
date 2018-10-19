#	$NetBSD: Makefile,v 1.1 2007/06/29 23:30:19 rumble Exp $

.include <bsd.own.mk>

PROG=	mount_efs
SRCS=	mount_efs.c pathadj.c
MAN=	mount_efs.8

MOUNT=	${NETBSDSRCDIR}/sbin/mount
CPPFLAGS+=-I${MOUNT}
.PATH:	${MOUNT}

DPADD+=${LIBUTIL}
LDADD+=-lutil

.include <bsd.prog.mk>
