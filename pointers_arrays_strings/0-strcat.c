#include "main.h"
#include <string.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: String that will be appended
 * @src: String to be concatenated
 * Return: pointer @dest
 */

char *_strcat(char *dest, char *src)

{
	int len1 = strlen(dest);
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}

	dest[len1 + i] = '\n';
	
	return dest;

}
