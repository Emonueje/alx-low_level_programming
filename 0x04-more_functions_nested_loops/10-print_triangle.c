#include "main.h"

/**
 *print_triangle - prints the mirror triangle
 *@size: the input size of the triangles base
 *Return: Void functions return no value
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (row = 1; row <= size; row++)
	{
		for (column = row; column < size; column++)
		{
			_putchar(' ');
		}
		for (column = 1; column <= row;  column++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
