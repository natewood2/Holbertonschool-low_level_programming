#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array: hold the value in the array that we are searching for.
 * @size: size of the array
 * @value: the value we are searching for
 * Return: FIND
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int find = -1;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				find = i;
				break;
			}
		}
	}
	return (find);
}
