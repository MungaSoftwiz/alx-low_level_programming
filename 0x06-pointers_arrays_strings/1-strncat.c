#include "main.h"

/**
  * _strncat - function concatenates two strings
  * @dest: destination string to be concatenated to
  * @src: source string to concatenate
  * @n: maximum number of bytes to be concatenated
  * Return: resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
