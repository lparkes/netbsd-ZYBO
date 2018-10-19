/* $NetBSD: conj.c,v 1.1 2007/08/20 16:01:35 drochner Exp $ */

/*
 * Written by Matthias Drochner <drochner@NetBSD.org>.
 * Public domain.
 */

#include <complex.h>
#include "../src/math_private.h"

double complex
conj(double complex z)
{
	double_complex w = { .z = z };

	IMAG_PART(w) = -IMAG_PART(w);

	return (w.z);
}
