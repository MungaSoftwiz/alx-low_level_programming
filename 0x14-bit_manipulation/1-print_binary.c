#include "main.h"

/**
 * print_binary - function prints binary representation of a number.
 * @n: the unsigned long integer to be printed in binary form.
 *
 * Description: it prints 0 if bit and n are both 1 else it prints zero.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;
	int bits_count = 0;

	if (n == 0)
		_putchar('0');
	/* find the highest order bit */
	while (bit <= n)
	{
		bit <<= 1;
		bits_count += 1;
	}
	bit >>= 1;

	/* print the bits in reverse */
	while (bits_count > 0)
	{
		if (bit & n)
			_putchar('1');
		else
			_putchar('0');

		bit >>= 1;
		bits_count -= 1;
	}
}
