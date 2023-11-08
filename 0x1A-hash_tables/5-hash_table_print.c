#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table contents
 * @ht: a pointer to a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned char comma = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	index = 0;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[index];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
		index++;
	}
	printf("}\n");
}
