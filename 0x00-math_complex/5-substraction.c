#include "holberton.h"
#include <stdlib.h>

/**
 * substraction -  performs the substraction operation to complex numbers.
 * @c1: struct first complex number
 * @c2: struct second complex number
 * @c3: struct result substraction
 * Return:  the substraction.
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
