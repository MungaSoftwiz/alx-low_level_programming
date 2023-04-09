#include "main.h"

/**
 * get_endianness - function checks for the endianness of an int.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int j = 1;
	char *ptr = (char *)&j;

	if (*ptr == 1)
		return (1);
	return (0);
}
