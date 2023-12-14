#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * using Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: num of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t g, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (g = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		g = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", g, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; g < jump && array[g] < value; g++)
		printf("Value checked array[%ld] = [%d]\n", g, array[g]);
	printf("Value checked array[%ld] = [%d]\n", g, array[g]);

	return (array[g] == value ? (int)g : -1);
}
