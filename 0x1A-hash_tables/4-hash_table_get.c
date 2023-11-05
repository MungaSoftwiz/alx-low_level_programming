#include "hash_tables.h"

/**
 * hash_table_get - functions retrieves value assocuiated with a key
 * @ht: the hash table
 * @key: the key of the ht pair
 *
 * Return: value associated with key or NULL on failuure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	/* input validation */
	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	/* calculate index where key should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	current_node = ht->array[index];
	while (current_node && strcmp(current_node->key, key) != 0)
		current_node = current_node->next;

	return ((current_node == NULL) ? NULL : current_node->value);
}
