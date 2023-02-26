#include <stdio.h>
#include "main.h"

/**
 * print_times_table - outputs the xtables.
 * @n: the input value for processing.
 * Return: VOid functions return no value.
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
				_putchar(',');
			}
			if (k < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k  + '0');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar(' ');
				_putchar(' ');
				printf("%d",  k);
			}
			else if (k > 99)
			{
				_putchar(' ');
				printf("%d", k);
			}
		}
		_putchar('\n');
	}
}
