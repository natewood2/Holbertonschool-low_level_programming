#include "main.h"
/**
 * print_triangle - entry point
 * Description: prints diagonals
 * @size: the size of the triangle
 * Return: 0
 */

void print_triangle(int size)

{
	int r, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
