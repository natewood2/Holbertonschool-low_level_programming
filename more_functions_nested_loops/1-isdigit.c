#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: returns a 1 if it is a digit, 0 otherwise
 * Return: 1 if it is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= 32) && (c <= 127))

		return (1);
	else
		return (0);
}
