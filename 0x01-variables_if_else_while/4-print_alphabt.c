#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * prints all alphabets except q and e
  *
  * Return: 0(Success)
  */

int main(void)
{
	int ch, q, e;

	q = 'q';
	e = 'e';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != q && ch != e)
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
