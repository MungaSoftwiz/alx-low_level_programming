#include <stdio.h>
#include <stdlib.h>

/**
  * main -Entry point
  *
  * program prints alphabets a-z in lowercase each in a new line
  *
  * Return: 0(Success)
  */

int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
