#	$NetBSD: bsd.powerpc-4xx.mk,v 1.3 2011/06/22 18:17:17 matt Exp $

.ifndef _BSD_I386PAE_XEN_MK_
_BSD_I386PAE_XEN_MK_=1

KMODULEARCHDIR:=	i386pae-xen

XEN=	1
PAE=	1

.endif # _BSD_I386PAE_XEN_MK_
