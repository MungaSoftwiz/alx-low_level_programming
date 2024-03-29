#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: is an array input
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index for cmpnot , -1 for no matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
