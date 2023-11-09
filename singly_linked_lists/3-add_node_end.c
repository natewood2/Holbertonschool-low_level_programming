#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - a function that will add a new node, this time, at the end.
 * @head: the head on the node.
 * @str: the string I shall duplicated
 * Return: the new_node which is the new node
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
