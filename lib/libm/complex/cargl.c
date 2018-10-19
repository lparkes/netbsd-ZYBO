/* $NetBSD: cargf.c,v 1.1 2007/08/20 16:01:31 drochner Exp $ */

/*
 * Public domain.
 */

#include "../src/namespace.h"
#include <complex.h>
#include <math.h>

long double
cargl(long double complex z)
{

	return atan2l(__imag__ z, __real__ z);
}
