#include "main.h"

/**
  * print_times_table - Entry point
  * @n: the integer input specified
  * Description: program prints n times table starting with zero
  * + 0: used to convert the digit to it's equivalent ASCII character since we
  * use the _putchar function which only allows characters
  * Return: product
  */

void print_times_table(int n)
{
	int i, j, product;

if (n >= 0 || n <= 15)
{

	for (i = 0; i <= 'n'; i++)
	{
	for (j = 0; j <= 'n'; j++)
	{
		product = i * j;

		if (product < 10)
		{
		_putchar(product + '0');

		}
		else if (product < 100)
		{
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
		}

		else
		{
		_putchar((product / 100) + '0');
		_putchar(((product % 100) / 10) + '0');
		_putchar((product % 10) + '0');
		}
			if (j < n)
			{
			_putchar(',');
			_putchar(' ');
			}
			_putchar(product + '0');
	}
	_putchar('\n');
	}
}
}
