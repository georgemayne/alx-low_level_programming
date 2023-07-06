#include "main.h"
/**
 * flip_bits - function that flip to get from one number to another.
 * @n: first num
 * @m: second num
 * Return: Always the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int g, r;

	g = 0;
	result = 1;
	differnce = n ^ m;
	for (r = 0; r < (sizeof(unsigned long int) * 8); r++)
	{
		if (result == (differnce & result))
			g++;
		result <<= 1;
	}

	return (g);
}
