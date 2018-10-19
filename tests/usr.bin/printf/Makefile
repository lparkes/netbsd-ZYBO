# $NetBSD: Makefile,v 1.1 2013/08/10 22:36:16 dholland Exp $

.include <bsd.own.mk>

TESTSDIR=	${TESTSBASE}/usr.bin/printf

TESTS_SH=	t_builtin t_command

t_builtin: t_builtin.sh printf.sh

t_command: t_command.sh printf.sh

.include <bsd.test.mk>
