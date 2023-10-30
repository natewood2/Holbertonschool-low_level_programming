#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: it is a array of integers
 * @size: is the size of the array of integers
 * @cmp: the function pointer
 * Return: anything that matches with cmp
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int index;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
