#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: input pointer to string
 * @accept: input pointer to strin
 * Return: Returns an unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, check = 0;

	i = 0;
	while (isalpha(s[i]))
	{
		if (strcmp(s, accept))
			check += 1;
		i++;
	}
	return (check);
}
