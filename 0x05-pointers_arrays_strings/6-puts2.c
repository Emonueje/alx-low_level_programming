#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints everyother character of a string
 * @str: input string
 * Return: void functions return no functions
 */
void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *c = str;
	int i;

	t = strlen(str) -1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

