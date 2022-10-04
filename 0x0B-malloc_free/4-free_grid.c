#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory dynamically allocated
 * @grid: pointer to 2-D array
 * @row: row of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int row)
{
	int i;

	for (i = 0; i < row; i++)
		free(grid[i]);
	free(grid);
}
