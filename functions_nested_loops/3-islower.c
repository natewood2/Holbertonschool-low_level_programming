#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: is letter input
 * Return: 1 if c is lowercase if not 0 is returned
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
