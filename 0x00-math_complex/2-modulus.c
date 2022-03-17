#include "holberton.h"
#include <stdlib.h>
#include <math.h>

/**
 * modulus -  returns the modulus of a given complex number.
 * @c: struct
 * Return:  the modulus of a given complex number.
 */

double modulus(complex c)
{
	double mod = sqrt((c.re * c.re) + (c.im * c.im));

	return (mod);
}
