#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: count of command line arguments
  * @argv: argument vector
  * Return: 0(if program is a sucess) else 1(if 2 arguments absent)
  */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi (argv[1]) * atoi (argv[2]));

		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
