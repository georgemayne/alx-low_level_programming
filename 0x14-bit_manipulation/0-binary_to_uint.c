#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars pointer
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int g;
	unsigned int r;

	r = 0;
	if (!b)
		return (0);
	for (g = 0; b[g] != '\0'; g++)
	{
		if (b[g] != '0' && b[g] != '1')
			return (0);
	}
	for (g = 0; b[g] != '\0'; g++)
	{
		r <<= 1;
		if (b[g] == '1')
			r += 1;
	}
	return (r);
}
