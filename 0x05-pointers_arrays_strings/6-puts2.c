#include "main.h"

/**
  * puts2 - prints every other character of the string starting with the first
  * character
  * @str: the sring to print
  * Return: void
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
