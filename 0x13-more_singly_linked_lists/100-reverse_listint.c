#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: a pointer to the first node in the list.
 *
 * Return: a pointer to the first node of the reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	next_node = NULL;
	prev_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	return (prev_node);
}
