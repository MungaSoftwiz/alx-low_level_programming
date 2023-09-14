#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - function frees a doubly linked list
 * @head: a pointer to the head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
