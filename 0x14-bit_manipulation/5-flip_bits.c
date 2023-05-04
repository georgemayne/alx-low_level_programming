#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int geo, rit;

	geo = 0;
	result = 1;
	differnce = n ^ m;
	for (rit = 0; rit < (sizeof(unsigned long int) * 8); rit++)
	{
		if (result == (differnce & result))
			geo++;
		result <<= 1;
	}

	return (geo);
}
