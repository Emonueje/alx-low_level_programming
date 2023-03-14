#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - deallocates 2d arr memory
 * @grid: the 2d arr
 * @height: the number of rows
 * Return: void functions return no value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
