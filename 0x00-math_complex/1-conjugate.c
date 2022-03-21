#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - conjugate a given complex number.
 * @c: struct
 * Return: conjugate of a given complex number.
 */

complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
