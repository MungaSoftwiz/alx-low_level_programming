#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to a hash table
 * @ht: the hash table
 * @key: the key for the ht pair
 * @value: the value for the ht pair
 *
 * Return: 1 if add was successful, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_entry;
	char *value_cpy;
	unsigned long int index, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	for (j = index; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = value_cpy;
			return (1);
		}
	}
	new_entry = malloc(sizeof(hash_node_t));
	if (new_entry == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new_entry->key = strdup(key);
	if (new_entry->key == NULL)
	{
		free(new_entry);
		return (0);
	}
	new_entry->value = value_cpy;
	new_entry->next = ht->array[index];
	ht->array[index] = new_entry;

	return (1);
}
