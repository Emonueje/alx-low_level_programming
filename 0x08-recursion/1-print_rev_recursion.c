#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 * Return: void function, No return value
 */
void _print_rev_recursion(char *s)
{

	if (*s)
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
