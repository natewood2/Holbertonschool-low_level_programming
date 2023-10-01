#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers.
 * Return: 0
 */

void more_numbers(void)
{
	int a = 0;
	int c = 0;

	while (c <= 9)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
	_putchar('\n');
	c++;
	a = 0;
	}
}
