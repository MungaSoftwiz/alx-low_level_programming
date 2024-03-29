#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at an index
 * @head: a pointer to the first node in the list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded and -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous = *head, *current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free (current);
		return (1);
	}
	i = 0;
	while (i < index)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	previous->next = current->next;
	free(current);

	return (1);
}

