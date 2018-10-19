#	$NetBSD: Makefile.inc,v 1.2 2013/09/29 12:11:59 joerg Exp $

LIBISPRIVATE=	yes

.if !empty(LIB:Mlldb*)
CPPFLAGS+=	-I${LLDB_SRCDIR}/source
CPPFLAGS+=	-I${LLDB_SRCDIR}/source/Plugins/Process/POSIX
.endif

.include "${.PARSEDIR}/../Makefile.inc"
