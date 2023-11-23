#include "hash_tables.h"

/**
 * hash_table_print - Prints a single key-value pair from the hash table.
 * @ht: Hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int f = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (f == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			f = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
