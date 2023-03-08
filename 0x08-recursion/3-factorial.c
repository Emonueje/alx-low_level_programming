#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: input integer
 * Return: -1 on an error entry
 * 1 if entry is 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
