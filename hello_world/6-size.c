#include <stdio.h>
/**
 * main - Prints "with proper grammar, but the outcome is a piece of art,"
 * Return: Always 0
 */
int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;

printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of short: %zu bytes\n", sizeof(short));
printf("Size of long: %zu bytes\n", sizeof(long));
printf("Size of long long: %zu bytes\n", sizeof(long long));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
