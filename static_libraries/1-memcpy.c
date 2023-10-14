#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: is a point type pointer
 * @src: is a pointer type char
 * @n: is a int varible
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
        unsigned int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];

        for ( ; i < n; i++)
                dest[i] = '\0';

        return (dest);
}
