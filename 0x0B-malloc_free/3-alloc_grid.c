#include "main.h"

/**
 * alloc_grid - function that returns
 * a pointer to a 2 dimensional array of integers
 * @width: width of array one
 * @height: height of array two
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int g, j;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = (int **)malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	for (g = 0; g < height; g++)
	{
		m[g] = (int *)malloc(sizeof(int) * width);
		if (m[g] == NULL)
		{
			for (j = 0; j < g; j++)
				free(m[j]);
			free(m);
				return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			m[g][j] = 0;
		}
	}
	return (m);
}
