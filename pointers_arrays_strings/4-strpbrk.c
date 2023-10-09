#include "main.h"
/**
 *  _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a input value
 * @accept: string of bytes
 * Return: S
 */

char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
