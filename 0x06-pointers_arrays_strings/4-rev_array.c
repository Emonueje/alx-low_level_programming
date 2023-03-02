#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * @a: input of arrays
 * @n: input of number of array elements
 * Return: NO value
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
			printf(", ");
		i--;
	}
	printf("\n");
}
