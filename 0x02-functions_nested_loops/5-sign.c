#include "main.h"

/**
 * print_sign - method used to know the sign of the imput
 * @n: The integer that would be processed
 * Return: 1 if n > zero. 0 if == zero and -1 if n < than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
