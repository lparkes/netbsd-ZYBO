/*	$NetBSD: netif.h,v 1.3 2005/12/11 12:19:29 christos Exp $	*/


#include "iodesc.h"

struct netif {
	void *nif_devdata;
};

int		netif_open(void *);
int		netif_close(int);
