#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int geo;
	unsigned int rit;

	rit = 0;
	if (!b)
		return (0);
	for (geo = 0; b[geo] != '\0'; geo++)
	{
		if (b[geo] != '0' && b[geo] != '1')
			return (0);
	}
	for (geo = 0; b[geo] != '\0'; geo++)
	{
		rit <<= 1;
		if (b[geo] == '1')
			rit += 1;
	}
	return (rit);
}
