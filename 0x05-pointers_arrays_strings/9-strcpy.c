#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @src: string value to be copied
 * @dest: pointer to the buffer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int l = 0;
	int j = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
