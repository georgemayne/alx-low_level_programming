#include "main.h"
/**
 * find_mul - multipliers of n.
 * @n: the base number
 * @i: iterate number
 * Return: value 1 if n is a prime and 0 if otherwise
 */
int find_mul(int n, int i)
{
	if (i == 0)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (find_mul(n, i + 1));
	}
}
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the base number
 * Return: value 1 if n is a prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_mul(n, 2));
	}
}
