#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginning
 * of a list_t list.
 * @head: pointer to the head of the list.
 * @n: the int to be added to the new node of list_t list.
 *
 * Return: the address of the new element or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int count;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	for (count = 0; n < count; count++)
		;

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}


