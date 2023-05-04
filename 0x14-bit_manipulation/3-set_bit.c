#include "main.h"

/**
 * set_bit - function sets the bit of a particular index to 1.
 * @n: the binary string where the bit is inserted.
 * @index: the index to set the value - starts at 0.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	*n |= (1 << index);

	return (1);
}
