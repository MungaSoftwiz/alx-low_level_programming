#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of
 * integers using the Linear search algorithm.
 *
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to be searched for
 *
 *
 * Return: the first index where value is located or -1 if NUll or not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
