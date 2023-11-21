#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key of the function
 * Return: the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	for (; temp != NULL; temp = temp->next)	
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
	}
	return (NULL);
}
