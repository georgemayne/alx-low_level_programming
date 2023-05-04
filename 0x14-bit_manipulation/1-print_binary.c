#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base
 * @pow: power
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int geo;

	num = 1;
	for (geo = 1; geo <= pow; geo++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ann, res;
	char rep;

	rep = 0;
	ann = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (ann != 0)
	{
		res = n & ann;
		if (res == ann)
		{
			rep = 1;
			_putchar('1');

		}
		else if (rep == 1 || ann == 1)
		{
			_putchar('0');
		}
		ann >>= 1;
	}
}
