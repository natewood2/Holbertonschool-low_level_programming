#include "lists.h"

/**
 * free_listint - frees up the list
 * @head: head of the node
 * Return: voided
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp_node = head;

		head = head->next;
		free(temp_node);
	}
}
