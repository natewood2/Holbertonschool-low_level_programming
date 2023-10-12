#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: a input value
 * Return: Void
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
