#include "main.h"

/**
 * _strspn - locates a character in a string
 * @s: string input parameter
 * @accept: string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			/**
			  * if it finds that the char s[i] is also i
			  * n accept string it means it is part of
			  * the prefix substring so we break to go
			  * to the next char in s string
			  */
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
