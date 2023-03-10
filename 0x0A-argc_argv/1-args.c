#include <stdio.h>

/**
  * main - prints number of arguments passed into program
  * @argc: number count of arguments passed
  * @argv: an array of pointers to the arguments
  * Return: 0(success)
  */

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}
