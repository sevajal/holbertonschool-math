#include "holberton.h"
#include <stdlib.h>
#include <math.h>

/**
 * argument -  returns the argument of a given complex number.
 * @c: struct
 * Return:  the argument of a given complex number.
 */

double argument(complex c)
{
	double arg = atan2(c.im, c.re);

	return (arg);
}
