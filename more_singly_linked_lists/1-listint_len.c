#include "lists.h"

/**
 * listint_len - a function that returns number of elements
 * @h: head of the node
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
