#	$NetBSD: Makefile.inc,v 1.3 2007/07/24 10:49:23 pavel Exp $
#
#	etc.algor/Makefile.inc -- algor-specific etc Makefile targets
#

# If you change the list of distributed kernels, don't forget
# to update the release documentation in distrib/notes/common/contents

.if ${MACHINE_ARCH} == "mipsel"
KERNEL_SETS=		P4032 P5064
.else
KERNEL_SETS=		P5064-64
.endif
