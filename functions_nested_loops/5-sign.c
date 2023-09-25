#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @i: number input
 * Return: 1 prints '+' if i > 0, 0 prints '0' if i = 0, -1 prints '-' if i < 0
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
