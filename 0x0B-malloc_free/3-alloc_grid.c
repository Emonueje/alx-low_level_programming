#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates a grid
 * @width: the width of gird
 * @height: the height of the grid
 * Return: A pointer to the function
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid, gridElement = 0;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			grid[i][j] = gridElement;
		}
	}
	return (grid);
}
