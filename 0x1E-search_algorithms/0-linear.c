#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search fo
 *
 * Return: the first index where value is located
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}

