#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: char input
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int a = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[a++];
	}
	return (sum);
}
