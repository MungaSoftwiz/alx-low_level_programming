#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function frees a list.
 * @head: a pointer to the first element in the list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
