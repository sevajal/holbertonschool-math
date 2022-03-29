#include "holberton.h"

/**
 * complex_from_mod_arg - update the real and the imaginary parts
 * of a complex number given its modulus and arguments.
 * @m: modulus.
 * @arg: arguments.
 * @c3: updated complex number.
 * Return: void.
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
