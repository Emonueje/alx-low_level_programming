#include "main.h"

/**
 * puts2 - prints everyother character of a string
 * @str: input string
 * Return: void functions return no functions
 */
void puts2(char *str)
{
	int i;
	char c;

	if (*str == '\0')
	{
		return;
	}
	for (i = 0; *(str + i) != 0; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	c = '\0';
	_putchar(c);
}
