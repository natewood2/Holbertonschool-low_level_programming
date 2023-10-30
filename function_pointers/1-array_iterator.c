#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: it is a array
 * @size: it is the size
 * @action: the action of the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int index;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
