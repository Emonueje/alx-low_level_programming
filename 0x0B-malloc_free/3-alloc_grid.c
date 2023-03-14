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
	int i, j, len, gridElement = 0;
	int **arr, *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	len = sizeof(int *) * height + sizeof(int) * (height * width);
	arr = (int **)malloc(len);
	if (arr == NULL)
		return (NULL);
	ptr = (int *)(arr + height);
	for (i = 0; i < height; i++)
		arr[i] = (ptr + width * i);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = gridElement;
	}
	return (arr);
}
