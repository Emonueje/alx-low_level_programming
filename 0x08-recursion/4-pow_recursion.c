#include "main.h"

/**
 * _pow_recursion - find the index of base to power
 * @x: base
 * @y: power
 * Return: index of base to power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
