#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: input pointer to string
 * @b: constant byte
 * @n: unsigned int input
 * Return: returns a pointer to the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
