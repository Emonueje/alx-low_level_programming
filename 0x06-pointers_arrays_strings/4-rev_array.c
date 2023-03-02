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
	int i, temp;

	for (i = 0; (n - 1) > 0; n--, i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}
}
