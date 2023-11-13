#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns a number of bits you would need to flip
 * @n: a input value
 * @m: a unsigned long int
 * Return: count_bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int count_bits = 0;

	for (; xor != 0; xor >>= 1)
	{
		count_bits += xor & 1;
	}
	return (count_bits);
}
