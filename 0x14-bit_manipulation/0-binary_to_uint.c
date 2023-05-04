#include "main.h"

/**
 * binary_to_uint - function converts binary into an unsigned integer.
 * @b: the string of binary digits to be converted.
 *
 * Return: the converted number or 0 if some characters are not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		value <<= 1;

		if (b[i] == '1')
		{
			value += 1;
		}
		i++;
	}
	return (value);
}
