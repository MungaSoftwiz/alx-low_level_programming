#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 * @size: size of the created hash table
 *
 * Return: a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *table;

	/* allocate memory to the hash table*/
	table = malloc(sizeof(hash_table_t) * 1);
	if (table == NULL)
		return (NULL);

	table->size = size;
	/* allocate memory to array of pointers to hash nodes     */
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* set each slot to null */
	for (index = 0; index < size; index++)
	{
		table->array[index] = NULL;
	}
	return (table);
}
