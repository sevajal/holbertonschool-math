#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - displays the complex numbers
 * followed by a new line.
 * @c: struct
 * Return: nothing.
 */

void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%.0f\n", c.re);
	else
		printf("%.0f + %.0fi\n", c.re, c.im);
}
