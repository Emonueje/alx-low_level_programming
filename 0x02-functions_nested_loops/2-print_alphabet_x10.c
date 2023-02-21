#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabets 10x
 *
 * Return: No value
 */
void print_alphabet_x10(void)
{
	int i;
	char p;

	for (i = 0; i < 10; i++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
	_putchar('\n');
	}
}
