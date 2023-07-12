#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search fo
 *
 * *return: the first index where value is located
 *
 */
int linear_search(int *array,size_t size , int value)
{
	size_t i;
	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		 return(i);
		}
		else
		{printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return(-1);
}
