#include <stdio.h>

/**
 * main - Entry point
 *
 * program prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
	int j = 0;
	int k = 0;
	int coma = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
			if (i < j && j < k)
			{
				if (coma == 0)
				{
					putchar(',');
					putchar(32);
				}
				coma = 0;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}
			++k;
			}
			++j;
			k = 0;
		}
		++i;
		j = 0;
	}
	putchar(10);
	return (0);
}

