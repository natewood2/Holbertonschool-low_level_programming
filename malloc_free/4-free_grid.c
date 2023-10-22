#include "main.h"
/**
 * free_grid -  frees a 2 dimensional grid.
 * @grid: memory block set to be freed
 * @height: height of the array
 * Return: Void
 */

void free_grid(int **grid, int height)

{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
