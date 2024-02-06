#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not present/NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (mid = low; mid < high; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
