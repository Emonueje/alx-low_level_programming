#include "main.h"

/**
 * print_last_digit - prints last digit
 * @i: Contains the number to be processed
 * Return: The absolute last digit
 */
int print_last_digit(int i)
{
	int n = i % 10;

	if (n < 0)
	{
		_putchar((n * -1) + '0');
		return (n * -1);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
