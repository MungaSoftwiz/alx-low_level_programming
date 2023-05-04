#include "main.h"

/**
 * get_bit - function gets the value of a bit of a given index.
 * @n: integer for us to check the indexed bit.
 * @index: the integer starting from 0, of the bit we want to get.
 *
 * Return: value of the bit at index or -1 if error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	return (n >> index & 1);
}
