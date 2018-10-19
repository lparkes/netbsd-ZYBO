#	$NetBSD: Makefile.pmax.inc,v 1.6 2009/12/14 00:46:09 matt Exp $

SYSTEM_LD_TAIL_EXTRA=; \
		echo "Convert kernel $@ into NCD firmware image."; \
		${TOOL_NCDCS} $@ $@.ncd; \
		mv $@.ncd $@
