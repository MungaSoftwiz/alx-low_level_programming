#include "main.h"

/**
  * reverse_array - reverses contents of an array of integer
  * @a: pointer to the integer
  * @n: number of elements in the array
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
