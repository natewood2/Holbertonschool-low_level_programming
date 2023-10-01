#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n : parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int d, s;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
			_putchar(' ');

			_putchar('\\');

			if (d == (n - 1))
			continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
