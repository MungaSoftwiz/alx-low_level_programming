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
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
	putchar('\n');

	return (0);
}
