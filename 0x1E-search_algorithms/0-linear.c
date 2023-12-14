#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - performs a linear search for a
 * value in an array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located, -1
 * if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t g;

	if (array == NULL)
		return (-1);

	for (g = 0; g < size; g++)
	{
		printf("Value checked array[%ld] = [%d]\n", g, array[g]);

		if (array[g] == value)
			return (g);
	}
	return (-1);
}
