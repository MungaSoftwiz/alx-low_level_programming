#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: a double pointer to the head of the list
 * @index: the index of node to delete
 *
 * Return: 1 on success and -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	else
	{
		while (count < index && current != NULL)
		{
			current = current->next;
			count++;
		}
		if (current == NULL && count < index)
			return (-1);
		if (current->next != NULL)
			current->next->prev = current->prev;
		if (current->prev != NULL)
			current->prev->next = current->next;
		free(current);
	}

	return (1);
}
