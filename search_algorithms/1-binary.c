#include "search_algos.h"
/**
 * binary_search - a searching algorithem that sorts using the binary
 * @array: the array we are sorting
 * @size: size of the array
 * @value: the value we are getting
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int mid;
	int high = size - 1;
	int i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
