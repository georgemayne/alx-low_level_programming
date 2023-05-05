#include "main.h"

/**
 * clear_bit - function that sets the value of
 * a bit to 0 at a given index.
 * @n: num
 * @index: index
 * Return: Always
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int geo;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	geo = ~(1 << index);
	*n = *n & geo;

	return (1);
}
