#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: a input value
 * @index: index of the code
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
	{
		return (-1);
	}
	else if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);

	*n &= mask;

	return (0);
}
