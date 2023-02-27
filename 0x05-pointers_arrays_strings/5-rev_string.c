#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: strinng to be reversed
  * s[len - i - 1]: represents index in the 2nd half of the string that
  * corresponds to current index 'i' in first half of string
  * Return: void
  */

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
