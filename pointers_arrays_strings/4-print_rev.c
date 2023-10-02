#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by new line
 * @s: string
 * Return: string in reverse
 *
 */

void print_rev(char *s)
{
	int fc = 0;

	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		fc++;
	}

	for (b = (fc - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
