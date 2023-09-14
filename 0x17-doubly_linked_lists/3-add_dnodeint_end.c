#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: a double pointer to the head
 * @n: the integer data of the new node
 *
 * Return: address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
		current = current->next;
	if (current->next == NULL)
	{
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
