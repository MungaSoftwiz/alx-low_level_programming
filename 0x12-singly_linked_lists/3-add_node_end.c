#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a temp node at the end
 * of a list.
 * @head: a pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: adddress of temp element or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *temp, *last;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = dup;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (*head);
}
