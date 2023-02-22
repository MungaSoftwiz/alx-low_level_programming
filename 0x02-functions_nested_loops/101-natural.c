#include <stdio.h>

/**
  * main - Entry point
  * program computes and prints the sum of multiples of 3 and 5 below 1024
  * Return: 0(success)
  */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
	/* checks if i is dividible by 5 or 3 */
	if (i % 5 == 0 || i % 3 == 0)
	{
		sum += i;
	}
	}
	/* prints all multiples of 3 and 5 below 1024 8 */
	   printf("%d\n", sum);


	return (0);
}
