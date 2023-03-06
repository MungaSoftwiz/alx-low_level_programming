#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: pointer to character string to be checked
  * @c: character to be checked in string s
  * Return: a pointer to first occurence of character or null if not found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
