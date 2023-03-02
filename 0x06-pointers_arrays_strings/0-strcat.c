#include "main.h"

/**
  * *_strcat - concatenates two strings
  * @dest: pointer variable to ba appended to
  * @src: pointer variable to be appended
  * Return: pointer to resulting string
  */

char *_strcat(char *dest, char *src)
{
	/* stores starting address of dest string */
	char *temp = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (temp);
}
