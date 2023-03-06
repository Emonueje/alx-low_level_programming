#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for sets of bytes
 * @s: input string
 * @accept: input string
 * Return: Returns a pointer to the function
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (1)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
			if (!*s)
				return (NULL);
		}
		s++;
	}
	return (NULL);
}
