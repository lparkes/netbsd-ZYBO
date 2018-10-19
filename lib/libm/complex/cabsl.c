/* $NetBSD: cabs.c,v 1.1 2007/08/20 16:01:30 drochner Exp $ */

/*
 * Public domain.
 */

#include "../src/namespace.h"
#include <complex.h>
#include <math.h>

long double
cabsl(long double complex z)
{

	return hypotl(__real__ z, __imag__ z);
}
