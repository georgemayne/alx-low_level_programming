#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number  of g
 * @index: from 0 of the bit you want to set
 * Return: Always 1 if it worked, otherwise -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int g;

	if (index > 63)
		return (-1);
	g = 1 << index;
	if (*n & g)
		*n ^= g;
	return (1);
}
