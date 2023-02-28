#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: input array
 * @n: number of elements to be outputted
 * Return: Void functions return no value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", (*(a + i)));
		if (i == (n - 1))
			break;
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
