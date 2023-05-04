#include "main.h"

/**
 * print_binary - function prints binary representation in a number.
 * @n: the unsigned long integer to be printed in binary form.
 *
 * Description: it prints 0 if bit and n are both 1 else it prints zero.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
