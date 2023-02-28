#include "main.h"
#include <string.h>

/**
 * puts_half- Prints the prints the second half of a string
 * @s: input str for processing
 * i = iteration_value
 * e = even_length
 * o = odd_length
 * h = half value
 * Return: No value
 */
void puts_half(char *s)
{
	int str_length, e, o, i, h;

	str_length = strlen(s);
	if (str_length % 2 == 0)
	{
		o = str_length;
		h = o / 2;
		for (i = h; i < str_length; i++)
		{
			_putchar(*(s + i));
		}
	}
	else
	{
		e = str_length - 1;
		h = e / 2;
		for (i = h; i < e; i++)
		{
			_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
