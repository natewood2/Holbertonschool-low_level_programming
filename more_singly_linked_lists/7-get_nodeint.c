#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns some sort of node
 * @head: head of the node
 * @index: index of the function
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
