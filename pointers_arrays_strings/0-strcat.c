#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: String that will be appended
 * @src: String to be concatenated
 * Return: pointer @dest
 */

int main()
{
	
	char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
 

    printf("%s", ptr);
    printf("%s", s1);
    printf("%s", s2);
   
	return 0;
}

char *_strcat(char *dest, char *src)

{
	int len1 = strlen(dest);
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}

	dest[len1 + i] = '\0';

	return (dest);

}
