# $NetBSD: Makefile,v 1.1 2013/02/23 14:16:54 jmmv Exp $

.include <bsd.init.mk>

.PATH:	${SRCDIR}/doc

.for name in kyua-build-root.7 kyua-test-filters.7
MAN+=	${name}
${name}: ${name}.in ${MANPAGE_DEPS}
	name=${name}; ${BUILD_MANPAGE}
.endfor

.include <bsd.man.mk>
