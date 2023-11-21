#include "hash_tables.h"
/**
 * key_index - index of the key
 * @key: key
 * @size: size of the key
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
