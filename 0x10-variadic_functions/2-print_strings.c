#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints string on a new line
 *
 * @separator: the separator to print string
 *
 * @n: the string of parameters
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	char *str;
	va_list pa;

	va_start(pa, n);
	for (p = 0; p < n; p++)
	{
		str = va_arg(pa, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (p < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
