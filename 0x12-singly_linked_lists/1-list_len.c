#include <stdio.h>
#include "lists.h"

/**
  * list_len - check for the number of elements in a linked list.
  * @h: pointer to the first node in the list.
  *
  * Return: the number of elements in nodes pointed by h.
  */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
