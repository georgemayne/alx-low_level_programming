#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted array
  * of integers using interpolation search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t g, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		g = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (g < size)
			printf("Value checked array[%ld] = [%d]\n", g, array[g]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", g);
			break;
		}

		if (array[g] == value)
			return (g);
		if (array[g] > value)
			r = g - 1;
		else
			l = g + 1;
	}

	return (-1);
}
