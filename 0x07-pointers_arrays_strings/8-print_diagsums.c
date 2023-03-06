#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagnals
 * @a: input integer
 * @size: input integer
 * Return: returns no value
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0, i;

	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			diag1 += a[i];
			diag2 += a[size - 1];
		}
		else
		{
			diag1 += a[i * size + i];
			diag2 += a[(size * i) +(size - 1 -i)];
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
