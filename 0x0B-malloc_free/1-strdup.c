#include "main.h"

/**
 * _strdup - pointer to a new string which
 * is a duplicate of the string str
 * @str: copied string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	unsigned int r, g;
	char *m;

	if (str == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		;
		r++;
	m = malloc(r * sizeof(char));
	if (m == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < r; g++)
	{
	m[g] = str[g];
	}
	return (m);
}
