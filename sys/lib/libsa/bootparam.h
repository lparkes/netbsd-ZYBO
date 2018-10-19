/*	$NetBSD: bootparam.h,v 1.3 1998/01/05 19:19:41 perry Exp $	*/

int bp_whoami(int);
int bp_getfile(int, char *, struct in_addr *, char *);
