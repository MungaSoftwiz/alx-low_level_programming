#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a newly allocated space in
  * memory.It contains a copy of the string given as a parameter.
  * @str: string to be duplicated
  * Return: a pointer to duplicate string
  */

char *_strdup(char *str)
{
	int i, length;
	char *cpy;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;
	cpy = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		cpy[i] = str[i];
	cpy[length] = '\0';

	return (cpy);
}
