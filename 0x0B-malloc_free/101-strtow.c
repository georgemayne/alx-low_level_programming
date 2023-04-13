#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 * Return: number of words
 */
int wrdcnt(char *s)
{
	int r, n = 0;

	for (r = 0; s[r]; r++)
	{
		if (s[r] == ' ')
		{
			if (s[r + 1] != ' ' && s[r + 1] != '\0')
				n++;
		}
		else if (r == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow -  splits a string into words
 * @str: string to splear
 * Return:  an array of strings
 */
char **strtow(char *str)
{
	int r, j, k, l, n = 0, qa = 0;
	char **m;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	m = (char **)malloc(n * sizeof(char *));
	if (m == NULL)
	return (NULL);
		m[n - 1] = NULL;
		r = 0;
	while (str[r])
	{
		if (str[r] != ' ' && (r == 0 || str[r - 1] == ' '))
		{
		for (j = 1; str[r + j] != ' ' && str[r + j]; j++)
			;
			j++;
			m[qa] = (char *)malloc(j * sizeof(char));
			j--;
			if (m[qa] == NULL)
			{
				for (k = 0; k < qa; k++)
					free(m[k]);
				free(m[n - 1]);
					free(m);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				m[qa][l] = str[r + l];
			m[qa][l] = '\0';
				qa++;
				r += j;
		}
		else
			r++;
	}
	return (m);
}
