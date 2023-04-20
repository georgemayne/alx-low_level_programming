#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that prints the sum of all its parameters.
 * @n: the number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (s = 0; s < n; s++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);

}
