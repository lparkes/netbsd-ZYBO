#	$NetBSD: Makefile,v 1.1 2009/06/23 15:02:51 tron Exp $

.include <bsd.own.mk>

.if ${MKPOSTFIX} != "no"
SUBDIR+=	postfix
.endif

# Speedup stubs for some subtrees that don't need to run these rules
includes-postfix:
	@true

.include <bsd.subdir.mk>
