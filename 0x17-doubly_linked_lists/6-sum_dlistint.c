#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - function returns sum of data(n) of a linked list
 * @head: the pointer to the head of the list
 *
 * Return: sum of data or (0) if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
