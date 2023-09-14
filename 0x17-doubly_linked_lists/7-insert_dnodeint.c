#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 * @h: a double pointer to the head of the list
 * @idx: index of the list where new node should be added
 * @n: the integer to be inserted in the new node
 *
 * Return: address f the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		count = 0;
		current = *h;
		while (count < idx - 1 && current != NULL)
		{

			current = current->next;
			count++;
		}
		if (current == NULL && count < idx - 1)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}
