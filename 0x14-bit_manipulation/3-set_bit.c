#include "main.h"

/**
 * set_bit - function that set the value of
 * a bit to 1 at a given index.
 * @index: index
 * @n: pointer
 * Return: Always
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int geo;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	geo = 1 << index;
	*n = *n | geo;

	return (1);
}
