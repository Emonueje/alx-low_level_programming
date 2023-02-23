#include "main.h"

/**
 * print_square - prints out a sqaure shape
 * @size: input of the program
 * Return: NO values
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
