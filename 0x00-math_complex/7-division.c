#include "holberton.h"
#include <stdlib.h>

/**
 * division -  performs the division operation to complex numbers.
 * @c1: struct first complex number
 * @c2: struct second complex number
 * @c3: struct result division
 * Return:  the division.
 */

void division(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re + c1.im * c2.im) / (c2.re * c2.re + c2.im * c2.im);
	c3->im = (c1.im * c2.re - c1.re * c2.im) / (c2.re * c2.re + c2.im * c2.im);
}
