#include "main.h"

/**
  *  _islower - Entry point
  *
  * program check lowercase characters
  * @c: the integer parameter to be checked
  * Return: 1 if true, 0 if false
  */

int _islower(int c)
{
	int j = 'a';

	for (j = 'a'; j <= 'z'; j++)
	{
	/* takes argument c */

		if (c == j)
		{
		return (1);
		}
		{
		return (0);
		}
	}
}
