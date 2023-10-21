#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string str.
 * @str: string that will be copied
 * Return: NULL if error or pointer if successful.
 */

char *_strdup(char *str)

{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
