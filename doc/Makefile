#	$NetBSD: Makefile,v 1.1 2011/09/09 14:23:38 apb Exp $

.include <bsd.own.mk>

regen: .PHONY regen-BUILDING
regen-BUILDING: .PHONY
	${TOOL_MANDOC_ASCII} ${.CURDIR}/BUILDING.mdoc \
		| ${TOOL_SED} -e "s,.$$(printf '\b'),,g" \
		>${.CURDIR}/../BUILDING
