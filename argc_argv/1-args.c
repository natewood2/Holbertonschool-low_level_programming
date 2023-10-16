#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: an agrument value
 * @agrv: an agrument value
 * Return: 0
 */

int main(int argc, char *agrv[])

{
	int i;

	if (argc == 1)
	printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *agrv; i++, agrv++)

		;

		printf("%d\n", i - 1);
	}
	return (0);
}
