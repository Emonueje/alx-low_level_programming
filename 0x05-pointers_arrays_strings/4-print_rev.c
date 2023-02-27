#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input to be processed
 * Return: No value; void function
 */
void print_rev(char *s)
{
	int i, j, count;

	for (i = 0; *(s + i) != 0; i++)
	{
		count = i;
	}
	for (j = count; *(s + j) != 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
