#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function prints the elements of a list
 * @h: the head pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
