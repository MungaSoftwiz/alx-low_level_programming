#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: pointer to the char string
  * @s2: pointer to the char string
  * s1[i] - s2[i]: returns the ASCII difference of the strings
  * Return: returns an integer either negative, positive or zero
  */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	}
	return (s1[i] - s2[i]);
}
