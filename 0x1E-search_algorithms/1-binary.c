#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of integers
 *using the Binary search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: index where value is located
*/

int binary_search(int *array, size_t size, int value);
{
	size_t i = 0, lower = 0, midpoint = 0, upper = size - 1;

	if (!array)
		return (-1);
	while (lower <= upper)
	{
		midpoint = (lower + upper) / 2;
		i = low;

		for (; i <= high; ++i)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}

		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
