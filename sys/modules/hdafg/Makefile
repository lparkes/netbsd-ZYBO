#	$NetBSD: Makefile,v 1.5 2014/11/19 00:17:10 pooka Exp $

.include "../Makefile.inc"
.include "${.CURDIR}/Makefile.inc"

KMOD=	hdafg

# For non-rump modules, enable HDMI audio

CPPFLAGS+=	-DHDAUDIO_ENABLE_HDMI

.include <bsd.kmodule.mk>
