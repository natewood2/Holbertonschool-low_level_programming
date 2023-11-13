#include <stdio.h>
#include "main.h"

/**
 * get_bit - gits the bits of the main function
 * @n: the bits
 * @index: the index of the code
 * Return: -1 if out of bonds or the number of bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
