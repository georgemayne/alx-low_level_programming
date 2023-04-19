#include "function_pointers.h"

/**
  * int_index - function that searches
  * for integer.
  * @array: array
  * @size: array size
  * @cmp: pointer to the function
  * Return: Always 
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int rit = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (rit < size)
			{
				if (cmp(array[rit]))
					return (rit);
				rit++;
			}
		}
	}

	return (-1);
}
