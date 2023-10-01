#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: prints the number with _putchar
 * Return: void
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	n++;
	}
_putchar('\n');
}
