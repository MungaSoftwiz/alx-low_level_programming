#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of chars, and initializes it with a specific
  * char
  * @size: size of the array
  * @c: character to be initialized
  * Return: pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	index = 0;
	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
