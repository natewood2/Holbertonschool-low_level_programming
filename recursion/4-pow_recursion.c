#include "main.h"
/**
 * _pow_recursion - a function that returns
 * the value of x and raised to the power of y
 * @x: a input value
 * @y: a input value
 * Return: value x raised by power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
