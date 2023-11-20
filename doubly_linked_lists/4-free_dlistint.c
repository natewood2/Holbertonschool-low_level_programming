#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees the list up
 * @head: head of the node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
