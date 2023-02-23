#include "main.h"

/**
  * _isupper - entry point
  * Description:function checks for uppercase letters
  * @c: integer parameter that represents a character
  * Return: 1 if true, 0 if false
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
