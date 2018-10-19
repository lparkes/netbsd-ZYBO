#	$NetBSD$

PROG_CXX=	llvm-strings
NOMAN=		yes

.include <bsd.init.mk>

.PATH: ${LLVM_SRCDIR}/tools/llvm-strings

SRCS=	llvm-strings.cpp

LLVM_LIBS+= \
	Support \
	Demangle

.include "${.PARSEDIR}/../../link.mk"

.include <bsd.prog.mk>
