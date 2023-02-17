#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * prits alphabets a-z in lowercase and uppercase
  *
  * Return: 0(Success)
  */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
