#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - makes a 2-D array dynamically
 * @col: # of columns of the array
 * @row: # of rows of the array
 *
 * Return: pointer to the 2-D array, NULL (on failure or
 * if width or height is 0)
 */
int **alloc_grid(int col, int row)
{
	int i, j,  **grid;

	grid = malloc(row * sizeof(*grid));

		if (row < 1 || col < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		grid[i] = malloc(col * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < col; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
