#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: input for processing
 * Return: No value
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; ++b)
			{
				if (b != a)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}

	}
}
