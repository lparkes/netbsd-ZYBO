/* $NetBSD: creal.c,v 1.1 2007/08/20 16:01:36 drochner Exp $ */

/*
 * Written by Matthias Drochner <drochner@NetBSD.org>.
 * Public domain.
 */

#include <complex.h>
#include "../src/math_private.h"

double
creal(double complex z)
{
	double_complex w = { .z = z };

	return (REAL_PART(w));
}
