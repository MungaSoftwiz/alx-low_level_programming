#include "main.h"

/**
  * _memcpy - copies n bytes from src to dest
  * @dest: memory destination area to be copied to
  * @src: memory source area to be copied
  * @n: bytes to be copied
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
