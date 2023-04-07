#include "main.h"

/**
 * get_bit - function gets the value of a bit a given index.
 * @n: the integer for us to check the indexed bit.
 * @index: index starting from 0, of the bit we want to get.
 *
 * Return: value of the bit at index or -1 if error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	return (n >> index & 1);
}

