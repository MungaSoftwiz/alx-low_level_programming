#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: pointer to integer address
  * @b: pointer to integer address
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
