#include "lists.h"

/**
 * sum_listint - function calculates the sum of all data(n) of the list.
 * @head: the first node in the list.
 *
 * Return: sum of all data in the list or NULL if empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
