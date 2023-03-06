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
	int j;

	i = 0;
	while (s[i] != 32)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				check += 1;
		}
		i++;
	}
	return (check);
}
