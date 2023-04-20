#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints number on a new line
 *
 * @separator: the separator between two numbers
 *
 * @n: the number of parameters
 *
 * Return: the number to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	int num;
	va_list pa;

	va_start(pa, n);
	for (p = 0; p < n; p++)
	{
		num = va_arg(pa, int);
		printf("%d", num);
		if (p < n - 1 && separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
