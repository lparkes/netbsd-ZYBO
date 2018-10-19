#	$NetBSD: des.inc,v 1.2 2014/03/02 09:02:43 nakayama Exp $

.PATH.S: ${.PARSEDIR}
CPPFLAGS+=	-DDES_INT -DDES_UNROLL
.include "${.CURDIR}/des.inc"
