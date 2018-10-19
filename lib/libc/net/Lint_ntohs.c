/* $NetBSD: Lint_ntohs.c,v 1.3 2000/06/14 06:49:07 cgd Exp $ */

/*
 * This file placed in the public domain.
 * Chris Demetriou, November 5, 1997.
 */

#include <sys/types.h>
#undef ntohs

/*ARGSUSED*//*NOSTRICT*/
uint16_t
ntohs(net16)
	uint16_t net16;
{
	return (0);
}
