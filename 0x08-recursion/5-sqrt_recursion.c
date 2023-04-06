#include "main.h"
/**
 * find_root - calculate to check with n
 * @n: the base number
 * @i: iterate number
 * Return: i
 */
int find_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i <= n)
	{
		return (find_root(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: base number
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_root(n, 2));
}
