#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: pointer to character string to be checked
  * @c: character to be checked in string s
  * Return: a pointer to first occurence of character or null if not found
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
