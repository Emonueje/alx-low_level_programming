#include "main.h"
#include <string.h>

/**
 * puts2 - prints everyother character of a string
 * @str: input string
 * Return: void functions return no functions
 */
void puts2(char *str)
{
	int i, t;

	t = strlen(str) - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
