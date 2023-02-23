#include "main.h"

/**
  *  _isdigit - entry point
  * Description: checks if character is a digit
  * @c: integer parameter that represents a character
  * Return: 1 if true, 0 if false
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
