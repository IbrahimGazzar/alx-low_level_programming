#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2d int array
 * @grid: array to be freed
 * @height: length of the bigger array
 *
 * Return: no return value
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height < 1)
		return;
	while (--height)
		free(grid[height]);
	free(grid);
}
