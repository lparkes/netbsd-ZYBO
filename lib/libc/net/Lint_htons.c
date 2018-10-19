/* $NetBSD: Lint_htons.c,v 1.3 2000/06/14 06:49:07 cgd Exp $ */

/*
 * This file placed in the public domain.
 * Chris Demetriou, November 5, 1997.
 */

#include <sys/types.h>
#undef htons

/*ARGSUSED*//*NOSTRICT*/
uint16_t
htons(host16)
	uint16_t host16;
{
	return (0);
}
