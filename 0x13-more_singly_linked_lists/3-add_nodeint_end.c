#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a temp node at the end
 * of a list.
 * @head: a pointer the head of the list_t list.
 * @n: the integer to be added to the last node of the list.
 *
 * Return: adddress of temp element or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int count = 0;
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	for (count = 0; n < count; count++)
		;
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	}
	ptr->next = temp;
	return (temp);
}
