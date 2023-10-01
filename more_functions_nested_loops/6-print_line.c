#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n:  is the number of times the character _ should be printed.
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
	_putchar('\n');
}
