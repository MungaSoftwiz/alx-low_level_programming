#include "main.h"

/**
  * puts2 - prints every other character of the string starting with the first
  * character(0,2,4,6) e.t.c
  * @str: the sring to print
  * Return: void
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
