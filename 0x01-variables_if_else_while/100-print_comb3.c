#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* main - Entry point
* the program prints all possible combinations of two digits in ascending order
* numbers must be separated by a comma followed by a space
* the two digits must be different
* program should only use the putchar functions (<= five times)
* Return:0 (Success)
*/

int main(void)
{
int j;
int k;

for (j = 0; k <= 9; k++)
{
for (j = k + 1; j <= 9; j++)
{
putchar(k + '0');
putchar(j + '0');

if (k < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
