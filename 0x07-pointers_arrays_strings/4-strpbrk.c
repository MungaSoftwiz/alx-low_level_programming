#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: pointer string to be searched.
 * @accept: pointer to the string containing the characters to match
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return ('\0');
}
