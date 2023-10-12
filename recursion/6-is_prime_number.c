#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the input integer is a
 * prime number. Otherwise it returns a 0.
 * @n: is a interger
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

/**
 * is_prime - a function checking for prime numbers
 * @n: a input value
 * @divisor: if the number is divisable but a number
 * Return: is_prime
 */

int is_prime(int n, int divisor)

{
	if (divisor == n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, divisor + 1));
	}
}
