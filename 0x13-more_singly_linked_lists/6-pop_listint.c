#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to rhe first node in the list.
 *
 * Return: the head node’s data (n) or 0 if empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
