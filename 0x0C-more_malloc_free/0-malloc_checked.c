#include "main.h"

/**
 * malloc_checked - function that allocates
 * memory using malloc.
 * @b: allocated memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	i = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);

}
