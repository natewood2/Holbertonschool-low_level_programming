#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node
 * @head: head of node
 * @str: str that will be duplicated
 * Return: the new_node.. hopefully
 */

list_t *add_node(list_t **head, const char *str)
{

	size_t len = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;


	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
