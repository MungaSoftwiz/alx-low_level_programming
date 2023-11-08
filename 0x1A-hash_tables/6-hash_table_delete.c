#include "hash_tables.h"

/**
 * hash_table_delete - function eletes a hash table
 * @ht: a pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
