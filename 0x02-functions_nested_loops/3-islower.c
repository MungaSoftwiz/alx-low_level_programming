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
	int i = 'a';

	for (i = 'a'; i < 'z'; i++)
	{
	/* takes argument c */

		if (c == i)
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
}
