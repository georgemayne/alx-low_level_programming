#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int g, j, q, r;
	char *m;

	if (s1 == NULL)
	{
		g = 0;
	}
	else
	{
		for (g = 0; s1[g]; ++g)
			;

	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
		{
			;
		}
	}
	q = g + j + 1;
	m = malloc(q * sizeof(char));
	if (m == NULL)
		return (NULL);

	for (r = 0; r < g; ++r)
		m[r] = s1[r];
	for  (r = 0; r < j; ++r)
		m[r + g] = s2[r];
	m[g + j] = '\0';
	return (m);
}
