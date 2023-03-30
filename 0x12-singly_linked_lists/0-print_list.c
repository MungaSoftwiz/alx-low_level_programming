#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints elements of the list.
  * @h: a pointer to first elemet in the list.
  *
  * Return: number of nodes of the list.
  */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		nodes++;
		ptr = ptr->next;
	}
	return (nodes);
}
