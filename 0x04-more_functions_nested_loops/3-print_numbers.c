#include "main.h"

/**
  * print_numbers - entry point
  * Description: prints numbers 0-9 followed by a newline
  * Return: void
  */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
