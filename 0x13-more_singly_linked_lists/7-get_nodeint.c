#include "lists.h"

/**
 * get_nodeint_at_index - function prints the nth node of a list.
 * @head: the first node in the list.
 * @index: used to traverse throught the node.
 *
 * Return: nth node in the list or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp = head;

	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}
	return (NULL);
}
