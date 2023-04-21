#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int rit;
	va_list args;
	char *s, *sep;

	va_start(args, format);

	sep = "";

	rit = 0;
	while (format && format[rit])
	{
		switch (format[rit])
		{
			case 'c':
				printf("%s%c", sep,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep,  va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep,  va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				rit++;
				continue;
		}
		sep = ", ";
		rit++;
	}

	printf("\n");
	va_end(args);
}
