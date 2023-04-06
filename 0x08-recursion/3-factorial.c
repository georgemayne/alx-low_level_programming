#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: is lower than 0, the function should return -1 to indicate an error
 * Return: the value factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
