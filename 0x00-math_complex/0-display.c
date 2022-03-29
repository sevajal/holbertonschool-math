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
  char operation;
  int intre, intim;
  
  intim = c.im;
  intre = c.re;
  
    if (c.im < 0)
    {
      operation = '-';
      c.im = c.im * -1;
    }
    else
    {
      operation = '+';
      c.im = c.im;
    }
    
    if (c.im == 0)
        printf("%.0f\n", c.re);
    if (c.im != 0)
	{
    	if (c.im - intim || c.re - intre)
        	printf("%.1f %c %.1fi\n", c.re, operation, c.im);
      	else if (c.im == 1)
        	printf("%.0f %c i\n", c.re, operation);
      	else
        	printf("%.0f %c %.0fi\n", c.re, operation, c.im);
	}
}
