#include <stdio.h>
#include "lists.h"

/**
  * listint_len - check for the number of elements in a linked list.
  * @h: pointer to the first node in the list.
  *
  * Return: the number of elements in nodes pointed by h.
  */

size_t listint_len(const listint_t *h)
{
	size_t members = 0;
	const listint_t *temp = h;

	while (temp)
	{
		members++;
		temp = temp->next;
	}
	return (members);
}
