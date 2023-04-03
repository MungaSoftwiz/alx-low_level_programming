#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints elements of the list.
  * @h: a pointer to first elemet in the list.
  *
  * Return: number of nodes of the list.
  */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *temp = NULL;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
