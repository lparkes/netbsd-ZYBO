#	$NetBSD: Makefile.inc,v 1.2 2003/10/22 20:40:42 jdolecek Exp $
#
#	etc.ibmnws/Makefile.inc -- ibmnws-specific etc Makefile targets
#

# If you change the list of distributed kernels, don't forget
# to update the release documentation in distrib/notes/common/contents

KERNEL_SETS=            GENERIC

BUILD_KERNELS=

INSTALLATION_DIRS+=     installation/netboot
