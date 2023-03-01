#include "main.h"

/**
 * swap_int - swaps the value of two intergers
 * @a: First input
 * @b: Second input
 * Result: No value for void functions
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
