#include "main.h"

/**
 * create_array - function that creates an
 * array of chars, and initializes with specific char.
 * @size: size of the array
 * @c: specific
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int g;
	char *r;

	if (size == 0)
		return (NULL);
	r = malloc(size * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < size; g++)
	{
		r[g] = c;
	}
	return (r);
}
