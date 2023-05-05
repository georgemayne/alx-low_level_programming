#include "main.h"

/**
 * get_bit - function that returns the value of
 * a bit at a given index.
 * @n: bits checking
 * @index: check bit
 * Return: Always
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ann, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	ann = 1 << index;
	res = n & ann;
	if (res == ann)
		return (1);

	return (0);
}
