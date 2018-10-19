# $NetBSD: Makefile,v 1.9 2010/12/13 18:00:38 pooka Exp $

RUMPPRG=	envstat
SRCS+=		envstat.c config.c config_yacc.y config_lex.l

.PATH: ${.CURDIR}/../../common/lib/libprop
CPPFLAGS+=	-DRUMP_ACTION
RUMPSRCS+=	prop_kern.c

LDADD=		-lprop
DPADD=		${LIBPROP}

MAN=		envstat.8 envsys.conf.5

CPPFLAGS+=      -I${.CURDIR} -I.

YHEADER=	yes

.include <bsd.prog.mk>
