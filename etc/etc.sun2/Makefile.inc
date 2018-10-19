#	$NetBSD: Makefile.inc,v 1.6 2002/12/17 15:55:01 jdolecek Exp $
#
#	etc.sun2/Makefile.inc -- sun2-specific etc Makefile targets
#

# If you change the list of distributed kernels, don't forget
# to update the release documentation in distrib/notes/common/contents

KERNEL_SETS=		GENERIC FOURMEG DISKLESS

EXTRA_KERNELS=		INSTALL

BUILD_KERNELS=		RAMDISK

INSTALLATION_DIRS+=	installation/miniroot	\
			installation/netboot	\
			installation/tapeimage
