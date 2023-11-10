#include "lists.h"

/**
 * print_listint - a function that prints all the elements of listint_t
 * @h: head of the node
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
