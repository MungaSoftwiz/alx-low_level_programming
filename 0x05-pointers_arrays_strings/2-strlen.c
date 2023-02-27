#include "main.h"

/**
  * _strlen - returns the lenth of astring
  * @s: pointer to character address
  * Return: lenth of string
  */

int _strlen(char *s)
{

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
