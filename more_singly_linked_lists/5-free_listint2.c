#include "lists.h"

/**
 * free_listint2 - frees list again but this time deals with if head was null
 * @head: head of node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		listint_t *temp_node = *head;

		*head = (*head)->next;
		free(temp_node);
	}
}
