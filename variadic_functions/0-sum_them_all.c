#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the number of arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list valist;
	int sum = 0;
	unsigned int index;

	va_start(valist, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
