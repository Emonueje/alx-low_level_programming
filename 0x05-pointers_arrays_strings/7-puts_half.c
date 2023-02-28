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

	for (a = 0; str[a] != '\0'; a++)
		l++;
	n = (l / 2);
	if ((l % 2) == 1)
		n = ((l + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
