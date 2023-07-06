#include "main.h"

/**
 * set_bit - function that set the value of a bit to 1 at a given index.
 * @index: from 0 of the bit you want to set
 * @n: ptr num of g
 * Return: Always 1 if it worked, otherwise -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	g = 1 << index;
	*n = *n | g;

	return (1);
}
