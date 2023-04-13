#include "main.h"

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: grid to free the previous
 * @av: height of grid
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int r, j, k = 0, n = 0;

	char *m;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (r = 0; r < ac ; r++)
	{
		for (j = 0; av[r][j]; j++)
			n++;
		n++;
	}
	n++;
	m = malloc(n * sizeof(char));
	if (m == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		for (j = 0; av[r][j]; j++)
		{
			m[k] = av[r][j];
			k++;
		}
		m[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (m);

}
