#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *g;
	unsigned int h;

	if (nmemb == 0 || size == 0)
		return (NULL);
	g = malloc(nmemb * size);
	if (g == NULL)
		return (NULL);
	for (h = 0; h < (nmemb * size); h++)
		g[h] = 0;
	return (g);
}
