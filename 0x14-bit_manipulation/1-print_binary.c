#include "main.h"
/**
 * _power - function that calculate base and power
 * @base: exponet base
 * @pow: exponet power
 * Return: Always 0.
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int g;

	num = 1;
	for (g = 1; g <= pow; g++)
		num *= base;
	return (num);
}
/**
 * print_binary - function to prints the binary representation of a number
 * @n: number of printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
