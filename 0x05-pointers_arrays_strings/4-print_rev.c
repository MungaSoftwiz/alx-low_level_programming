#include "main.h"

/**
  * print_rev - prints a string in reversef followed by a newline
  * @s: pointer to address of char
  * Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
