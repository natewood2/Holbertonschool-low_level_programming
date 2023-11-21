#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_node;

	unsigned long int i;

	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->size = size;
	new_node->array = malloc(sizeof(hash_node_t *) * size);

	if (new_node->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_node->array[i] = NULL;
	}
	return (new_node);
}
