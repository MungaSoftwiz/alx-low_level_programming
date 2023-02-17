#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
* main - Entry point
*
* program prints all numbers of base16 in lowercase.
* You can only use putchar, 3 times, max.
*
* Return: 0
*/

int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
	putchar(i);

	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
