#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 * @head: a pointer to the first node in the list.
 * Description: after freeing the list sets the head pointer to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
