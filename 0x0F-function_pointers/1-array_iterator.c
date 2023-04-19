#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter
 * on each element of an array.
 * @array: array
 * @size: size of the array
 * @action:  pointer to the function to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t rit;

	if (array && action)
	{
		rit = 0;
		while (rit < size)
		{
			action(array[rit]);
			rit++;
		}
	}
}
