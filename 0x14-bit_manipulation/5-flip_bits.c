#include "main.h"

/**
 * flip_bits - returns number of bits you would flip to get from
 * one number to another.
 * @n: the first int number.
 * @m: the second int number.
 *
 * Return: number of bits needed to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned long int mask = n ^ m;

	while (mask != 0)
	{
		bit_count += mask & 1;
		mask >>= 1;
	}

	return (bit_count);
}
