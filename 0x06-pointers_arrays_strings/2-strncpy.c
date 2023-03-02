#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: pointer to the destination array where data is to be copied
  * @src: pointer to the source of data to be copied
  * @n: maximum numbers of characters to be copied from source
  * Return: a pointer to the destination string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
