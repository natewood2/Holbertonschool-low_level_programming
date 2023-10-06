#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: Destantion String
 * @n: array
 * @src: string to be copied
 * Return:@dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
