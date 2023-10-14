#include "main.h"
/**
 * _strspn - a function that searches a string for any of a set of bytes.
 * @s: segment targeted
 * @accept: reference bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)

{
        unsigned int b = 0;
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (accept[i] == *s)
                        {
                                b++;
                                break;
                        }
                        else if ((accept[i + 1]) == '\0')
                                return (b);
                }
                s++;
        }
        return (b);
}
