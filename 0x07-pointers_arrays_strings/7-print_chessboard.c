#include "main.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int j, k;

	j = 0;
	while (j < 8)
	{
		k = 0;
		while (k < 8)
		{
			;
			_putchar(a[j][k]);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
