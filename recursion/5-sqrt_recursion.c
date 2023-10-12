#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of number
 * @n: a input value
 * Return: The number of -1
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

/**
 * _sqrt - finds the square root for n.
 * @n: input value
 * @guess: the number to find square root
 * Return: _sqrt
 */

int _sqrt(int n, int guess)

{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, guess + 1));
	}
}
