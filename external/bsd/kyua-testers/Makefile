# $NetBSD: Makefile,v 1.1 2013/02/19 06:04:42 jmmv Exp $

SUBDIR= lib .WAIT libexec share tests

.for dir in libexec share tests
includes-${dir}: .PHONY
	@true
.endfor

.include <bsd.subdir.mk>
