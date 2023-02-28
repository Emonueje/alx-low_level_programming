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

	for (a = 0; s[a] != '\0'; a++)
		l++;
	b = (l / 2);
	if ((l % 2) == 1)
		b = ((l + 1) / 2);
	for (a = b; s[a] != '\0'; a++)
		_putchar(s[a]);
	_putchar('\n');
}
