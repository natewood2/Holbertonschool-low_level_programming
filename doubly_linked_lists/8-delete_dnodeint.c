#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: head of the node
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (current == NULL)
	{
		return (-1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	free(current);
	return (1);
}
