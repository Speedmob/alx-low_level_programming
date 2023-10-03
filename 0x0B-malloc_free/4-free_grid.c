#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees an already created grid
 * @grid: 2d array made
 * @height: height of 2d array
*/
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
