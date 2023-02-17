#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* program that prints all single digit numbers of base 10 starting from 0
*
* Return: 0 (Success)
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	putchar('\n');

	return (0);
}
