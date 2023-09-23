#include <stdio.h>

/**
 * main - prints alphabet in upper and lower case
 * Return 0
 *
 */
int main(void)
{
	char e = 'a';
	char f = 'A';
	
	while (e <= 'z')
	{
		putchar(e);
		e++;
	}
	while (f <= 'Z')
	{
		putchar(f);
		f++;
	}
	putchar('\n');
return (0);
}
