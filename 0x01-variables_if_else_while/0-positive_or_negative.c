#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * program will assign a random number to the variable n
  * program will assign a new random number each time it is executed
  *
  * Return: 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* If more than 0 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* If number is 0 */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* If number is not zero or more than zero */
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
