#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - function returns node at index
 * @head: the pointer to the head
 * @index: the index of the node
 *
 * Return: the nth node or NULL if it dosn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp;

	temp = head;

	while (n < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		n++;
	}
	return (temp);
}
