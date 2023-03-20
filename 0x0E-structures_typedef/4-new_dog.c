#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest
 * @dest: the buffer storing the string copy
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dougy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dougy = malloc(sizeof(dog_t));
	if (dougy == NULL)
		return (NULL);

	dougy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dougy->name == NULL)
	{
		free(dougy);
		return (NULL);
	}

	dougy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dougy->owner == NULL)
	{
		free(dougy->name);
		free(dougy);
		return (NULL);
	}

	dougy->name = _strcpy(dougy->name, name);
	dougy->age = age;
	dougy->owner = _strcpy(dougy->owner, owner);

	return (dougy);
}
