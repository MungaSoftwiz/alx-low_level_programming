#include "main.h"

/**
  * _memset - fills first n bytes of memory area pointed by s with cons byte b
  * @s: pointer string to char
  * @n: number of bytes of destination(s)
  * @b: constant byte to be pointed to
  * Return: a pointer to memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
