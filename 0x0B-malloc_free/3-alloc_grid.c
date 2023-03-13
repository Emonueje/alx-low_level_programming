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
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int*) * (height * width));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; i < width; j++)
		{
			*arr[j] = 0;
		}
	}
	return (arr);
}
