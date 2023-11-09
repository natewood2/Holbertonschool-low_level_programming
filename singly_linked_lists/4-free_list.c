#include "lists.h"

/**
 * free_list - free some nodes from a linked list
 * @head: head to the node
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp_node = head;

		head = head->next;

		free(temp_node->str);
		free(temp_node);
	}
}
