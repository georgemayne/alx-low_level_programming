#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the checking bits
 * @index: to check bit
 * Return: Always the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
