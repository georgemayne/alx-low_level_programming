#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - function that implements binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int low, high, mid;

    if (array == NULL)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        printf("Searching in array: ");
        for (int i = low; i <= high; i++)
            printf("%d%s", array[i], i < high ? ", " : "\n");

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}