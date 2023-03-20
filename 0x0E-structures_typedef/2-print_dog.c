#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - defines a new type with elememts and prints them out
  * @d: the struct dog to be printed
  * Return: void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);

}
