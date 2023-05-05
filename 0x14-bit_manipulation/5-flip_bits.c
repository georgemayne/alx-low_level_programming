#include "main.h"
/**
 * flip_bits - function that flip to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 * Return: Always
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
