#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - the sum of nodes
 * @head: head of the node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
