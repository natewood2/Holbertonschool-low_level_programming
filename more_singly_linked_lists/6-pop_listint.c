#include "lists.h"

/**
 * pop_listint - deleting and freeing nodes
 * @head: head of the node
 * Return: data pointer
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp_node;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	data = temp_node->n;

	*head = (*head)->next;
	free(temp_node);

	return (data);
}
