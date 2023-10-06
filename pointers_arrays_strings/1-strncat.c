#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: the source string and string to be added
 * @n: array
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, o;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (o = 0; o < n; o++, i++)
	{
		dest[i] = src[o];
	}
	return (dest);
}
