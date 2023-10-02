#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: input to reverse
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char r = s[0];
	int fc = 0;
	int i;

	while (s[fc] != '\0')
		fc++;

	for (i = 0; i < fc; i++)
	{
		fc--;
		r = s[i];
		s[i] = s[fc];
		s[fc] = r;
	}
}
