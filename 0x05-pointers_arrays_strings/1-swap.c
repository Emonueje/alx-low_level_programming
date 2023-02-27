#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: First input
 * @b: Second input
 * Result: No value for void functions
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
