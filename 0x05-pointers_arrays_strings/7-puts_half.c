#include "main.h"
#include <string.h>

/**
 * puts_half- Prints the prints the second half of a string
 * @s: input str for processing
 * Return: No value
 */
void puts_half(char *s)
{
	int a, b, l;

	l = 0;

	l = strlen(s);
	b = (l / 2);
	if ((l % 2) == 1)
		b = ((l + 1) / 2);
	for (a = b; s[a]; a++)
		_putchar(s[a]);
	_putchar('\n');
}
