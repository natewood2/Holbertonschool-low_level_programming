#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: target
 * @b: constant byte
 * @n: number of byte
 * Return: new value of target.
 */

char *_memset(char *s, char b, unsigned int n)

{
        while (n)
        {
                s[n - 1] = b;
                n--;
        }
        return (s);
}
