#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of the node
 * Return: the sums of number
 */

int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}
	return (head->n + sum_listint(head->next));
}
