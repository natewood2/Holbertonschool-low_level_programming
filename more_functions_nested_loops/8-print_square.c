#include "main.h"
/**
 * print_square - prints square
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int squ1, squ2;

	if (size > 0)
	{
		for (squ1 = 0; squ1 < size; squ1++)
		{
			for (squ2 = 0; squ2 < (size - 1); squ2++)
			_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
