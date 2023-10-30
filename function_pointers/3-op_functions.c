#include "3-calc.h"

/**
 * op_add - the addition of numbers
 * @a: integer
 * @b: integer
 * Return: result of the addition of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of the numbers
 * @a: integer
 * @b: integer
 * Return: result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - division of the two numbers
 * @a: integer
 * @b: integer
 * Return: the remainder
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - product of two numbers
 * @a: integer
 * @b: integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - gets the remainder
 * @a: integer
 * @b: integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
