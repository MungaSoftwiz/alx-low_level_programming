#include "hash_tables.h"

/**
 * key_index - function computes the index of a key
 *
 * @key: the string representation of the key
 * @size: the size of the array
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index;

	index = hash % size;
	return (index);
}
