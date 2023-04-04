#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position.
 * @head: a pointer to the first node in the list.
 * @idx: index of the list where node should be added.
 * @n: data to be added in the new node.
 *
 * Return: the address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i = 0;

	/* allocates memory and checks if the new node is empty */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* checks if the idx/position is at zero */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* traverses till it reaches at node just before idx where we will add node */
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new->next = temp->next; /*sets next of new node as next of (n-1)th node */
	temp->next = new; /* next of (n-1)th node is set to address of new node */

	return (new);
}
