#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function checks for the number of elements
 * @h: the head pointer
 *
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
