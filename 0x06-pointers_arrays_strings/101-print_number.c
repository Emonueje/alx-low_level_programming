#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: NO value
 */
void print_number(int n)
{
	unsigned int i;
	
	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = (-1 * n);
	}
	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
