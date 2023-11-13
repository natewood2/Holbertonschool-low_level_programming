#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation for the numbers
 * @n: a input value
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
